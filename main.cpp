#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

// Function to output each pair of the map
void outputMap(const map<int, double>& myMap) {
    for (const auto& pair : myMap) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
}
// Function to print all elements
void show(const unordered_set<int>& s) {
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

bool isSymmetric(const vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return true; // Trivially symmetric

    int first_last_digit = nums.front() % 10;
    int last_last_digit = nums.back() % 10;
    return first_last_digit == last_last_digit;

    void displayQueue(queue<int> q) {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}


    void deleteAllElements(queue<int> &q) {
        while (!q.empty()) {
            q.pop();
        }
    }

    int main() {

        //problem 1
        map<int, int> m;


        m.insert(make_pair(1, 1));
        m.insert(make_pair(2, 4));
        m.insert(make_pair(3, 9));
        m.insert(make_pair(4, 16));
        m.insert(make_pair(5, 25));


        cout << "Elements of the map:" << endl;
        for (const auto &pair: m) {
            cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
        }




        //problem 2
        map<int, string> students;

        // Inserting students and their grades
        students[74] = "Mike";
        students[76] = "Elena";
        students[93] = "David";
        students[70] = "George";
        students[89] = "Indira";

        // Displaying the students in order of their places
        int place = 1;
        for (auto it = students.rbegin(); it != students.rend(); ++it) {
            cout << place << " place is " << it->second << endl;
            ++place;
        }

        //problem 3
        map<char, int> letterPositions;

        // Fill the map with uppercase letters and their positions in the alphabet
        char letter = 'A';
        for (int position = 1; position <= 26; ++position) {
            letterPositions[letter] = position;
            ++letter;


            // Ask the user to input a letter
            cout << "Enter an uppercase letter: ";
            cin >> letter;

            // Convert the input letter to uppercase
            letter = toupper(letter);

            // Check if the input is a valid uppercase letter
            if (letter >= 'A' && letter <= 'Z') {
                // Print the position of the input letter
                cout << "Position of " << letter << " is " << letterPositions[letter] << endl;
            } else {
                cout << "Invalid input. Please enter an uppercase letter." << endl;
            }

            //problem 4
            // 1. Create a map with the given pairs
            map<int, double> myMap = {
                    {4,  7.5},
                    {25, 6.01},
                    {-9, 3.2},
                    {12, 5.16}
            };

            // 2. Output each pair of the map
            cout << "Original map:" << endl;
            outputMap(myMap);

            // 3. Insert a new pair (3, 3.75) and display resulting map
            myMap.insert(make_pair(3, 3.75));
            cout << "\nMap after inserting (3, 3.75):" << endl;
            outputMap(myMap);

            // 4. Insert a new pair (-10, 4.3) and display resulting map
            myMap.insert(make_pair(-10, 4.3));
            cout << "\nMap after inserting (-10, 4.3):" << endl;
            outputMap(myMap);

            // 5. Using method .find(), find key 12, store result inside iterator it and print the value
            auto it = myMap.find(12);
            if (it != myMap.end()) {
                cout << "\nValue associated with key 12: " << it->second << endl;
            } else {
                cout << "\nKey 12 not found." << endl;
            }

            // 6. Using the same iterator, delete pair with key 12 and print resulting map
            if (it != myMap.end()) {
                myMap.erase(it);
                cout << "\nMap after deleting key 12:" << endl;
                outputMap(myMap);
            }

            // 7. Modify a value whose key is -9 to 4.44 and print resulting map
            it = myMap.find(-9);
            if (it != myMap.end()) {
                it->second = 4.44;
                cout << "\nMap after modifying value for key -9:" << endl;
                outputMap(myMap);
            }

            //problem 5
            // Function to display all pairs of the unordered map
            void displayMap(const unordered_map<string, int> &myMap) {
                for (const auto &pair: myMap) {
                }
                cout << "(" << pair.first << ", " << pair.second << ")" << endl;


                int main() {
                    // 1. Create an unordered map with the given pairs
                    unordered_map<string, int> myMap = {
                            {"Earth",   3},
                            {"Mercury", 1},
                            {"Venus",   2}
                    };

                    // 2. Display all pairs of the map
                    cout << "Original map:" << endl;
                    displayMap(myMap);

                    // 3. Insert a pair ("Mars", 4) into the beginning and display the result
                    myMap.insert(myMap.begin(), {"Mars", 4});
                    cout << "\nMap after inserting (\"Mars\", 4) into the beginning:" << endl;
                    displayMap(myMap);

                    // 4. Insert a pair ("Saturn", 6) into position 3 and then insert ("Neptune", 8) into the same position. Display the result
                    auto it = myMap.begin();
                    advance(it, 2); // Move iterator to position 3
                    myMap.insert(it, {"Saturn", 6});
                    myMap.insert(it, {"Neptune", 8});
                    cout << "\nMap after inserting (\"Saturn\", 6) and (\"Neptune\", 8) into position 3:" << endl;
                    displayMap(myMap);

                    // 5. Display the size of the map
                    cout << "\nSize of the map: " << myMap.size() << endl;

                    // 6. Delete an element with key "Venus" and display resulting map
                    myMap.erase("Venus");
                    cout << "\nMap after deleting element with key \"Venus\":" << endl;
                    displayMap(myMap);

                    //problem 6
                    // 1. Create a multimap with the given pairs
                    multimap<int, int> myMultiMap = {
                            {100, 3},
                            {150, 4},
                            {100, 90}
                    };

                    // 2. Count how many keys are equal to 100
                    int count_100 = myMultiMap.count(100);
                    cout << "Number of keys equal to 100: " << count_100 << endl;

                    // 3. Insert the given pairs
                    myMultiMap.insert({200, 32});
                    myMultiMap.insert({100, -12});
                    myMultiMap.insert({90, 45});

                    // 4. Find the upper bound of key 100 and store result inside iterator variable
                    auto upper_bound_it = myMultiMap.upper_bound(100);

                    // 5. Print keys and values of next two elements that are at upper bound
                    cout << "Next two elements at upper bound of key 100:" << endl;
                    int printed_elements = 0;
                    for (auto it = upper_bound_it; it != myMultiMap.end() && printed_elements < 2; ++it) {
                        cout << "Key: " << it->first << ", Value: " << it->second << endl;
                        ++printed_elements;
                    }

                    // 6. Delete elements where key is 100, leaving only one pair, and display resulting map
                    auto range = myMultiMap.equal_range(100);
                    auto it = range.first;
                    ++it; // Move iterator to the second element with key 100
                    myMultiMap.erase(it, range.second);

                    // Display resulting map
                    cout << "\nResulting map after deleting elements with key 100:" << endl;
                    for (const auto &pair: myMultiMap) {
                        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
                    }

                    //problem 7
                    int numUsers;
                    cout << "Enter the number of users who want to register: ";
                    cin >> numUsers;

                    unordered_set<string> uniqueNames;
                    map<string, int> nameCount;

                    string name;
                    for (int i = 0; i < numUsers; ++i) {
                        cin >> name;

                        if (uniqueNames.find(name) == uniqueNames.end()) {
                            // Name is unique, store it and print OK
                            uniqueNames.insert(name);
                            nameCount[name] = 1;
                            cout << "OK" << endl;
                        } else {
                            // Name already exists, add a digit to the end and store it
                            int count = nameCount[name];
                            string newName = name + to_string(count);
                            nameCount[name]++;
                            uniqueNames.insert(newName);
                            cout << newName << endl;
                        }
                    }

                    //problem 8
                    int n;
                    cout << "Enter the number of values in the sequence: ";

                    cin >> n;

                    map<int, int> countMap;

                    int num;
                    for (int i = 0; i < n; ++i) {
                        cin >> num;
                        countMap[num]++;
                    }

                    bool goodSequence = true;
                    for (const auto &pair: countMap) {
                        if (pair.second != pair.first) {
                            goodSequence = false;
                            break;
                        }
                    }

                    if (goodSequence) {
                        cout << "Good sequence" << endl;
                    } else {
                        cout << "Not good sequence" << endl;
                    }

                    //PROBLEM 9
                    // Function to print all elements in sorted order
                    void show(const set<int> &s) {
                        for (auto it = s.begin(); it != s.end(); ++it) {
                            cout << *it << " ";
                        }
                        cout << endl;
                    }

                    int main() {
                        // Initialize the set and insert values
                        set<int> s;
                        s.insert(5);
                        s.insert(39);
                        s.insert(10);
                        s.insert(64);
                        s.insert(82);
                        s.insert(35);
                        s.insert(10); // Duplicates will not be added

                        // Print all elements in sorted order
                        cout << "Elements in sorted order:" << endl;
                        show(s);

                        //PROBLEM 10
                        // Initialize the unordered set and insert values
                        unordered_set<int> s;
                        s.insert(5);
                        s.insert(39);
                        s.insert(10);
                        s.insert(64);
                        s.insert(82);
                        s.insert(35);
                        s.insert(10); // Duplicates will not be added

                        // Print all elements
                        cout << "Elements:" << endl;
                        show(s);


                        //PROBLEM 11
                        // Initializing the multiset 's' and inserting values
                        multiset<int> s;
                        s.insert(5);
                        s.insert(39);
                        s.insert(10);
                        s.insert(64);
                        s.insert(82);
                        s.insert(35);
                        s.insert(10); // Duplicate value
                        s.insert(54);

                        // Printing all elements in sorted order
                        cout << "All elements in sorted order: ";
                        show(s);

                        // Erasing elements from 10 to before 54
                        s.erase(s.lower_bound(10), s.lower_bound(54));

                        // Printing all elements after removal
                        cout << "All elements after removal: ";
                        show(s);

                        //PROBLEM 12
                        // Seed the random number generator
                        srand(time(nullptr));

                        // Initialize multiset to store random integers
                        multiset<int> s;

                        // Generate 10 random integers in the range [11, 20] and insert them into the multiset
                        for (int i = 0; i < 10; ++i) {
                            int random_num = rand() % 10 + 11; // Generates numbers in range [11, 20]
                            s.insert(random_num);
                        }

                        // Input a number from the same range
                        int input;
                        cout << "Input a number in the range [11, 20]: ";
                        cin >> input;

                        // Check if the input number exists in the multiset
                        auto it = s.find(input);
                        if (it != s.end()) {
                            cout << "YES" << endl;
                        } else {
                            cout << "Output multiset:" << endl;
                            for (auto num: s) {
                                cout << num << " ";
                            }
                            cout << endl;
                        }


                        //PROBLEM 13
                        int n;
                        cout << "Enter the size of sets: ";
                        cin >> n;

                        // Input set A
                        set<int> setA;
                        cout << "Enter elements of set A: ";
                        for (int i = 0; i < n; ++i) {
                            int num;
                            cin >> num;
                            setA.insert(num);
                        }

                        // Input set B
                        set<int> setB;
                        cout << "Enter elements of set B: ";
                        for (int i = 0; i < n; ++i) {
                            int num;
                            cin >> num;
                            setB.insert(num);
                        }

                        // Union set
                        set<int> unionSet;
                        for (int num: setA)
                            unionSet.insert(num);
                        for (int num: setB)
                            unionSet.insert(num);

                        // Intersection set
                        set<int> intersectionSet;
                        for (int num: setA)
                            if (setB.find(num) != setB.end())
                                intersectionSet.insert(num);

                        // Difference set
                        set<int> differenceSet;
                        for (int num: setA)
                            if (setB.find(num) == setB.end())
                                differenceSet.insert(num);
                        for (int num: setB)
                            if (setA.find(num) == setA.end())
                                differenceSet.insert(num);

                        // Output the results
                        cout << "Union=";
                        for (int num: unionSet)
                            cout << num << " ";
                        cout << endl;

                        :cout << "Intersection=";
                        for (int num: intersectionSet)
                            cout << num << " ";
                        cout << endl;

                        cout << "Difference=";
                        for (int num: differenceSet)
                            cout << num << " ";
                        cout << endl;



                        //PROBLEM 14
                        int n;
                        cout << "Enter the size of the vector: ";
                        cin >> n;

                        vector<int> vec(n);
                        cout << "Enter elements of the vector: ";
                        for (int i = 0; i < n; ++i) {
                            cin >> vec[i];
                        }

                        // Using set to remove duplicates
                        set<int> uniqueElements(vec.begin(), vec.end());

                        // Rewriting the vector with unique elements
                        vec.assign(uniqueElements.begin(), uniqueElements.end());

                        // Output the resulting vector and its size
                        cout << "Resulting vector size: " << vec.size() << endl;
                        cout << "Resulting vector: ";
                        for (int num: vec) {
                            cout << num << " ";
                        }
                        cout << endl;

                        //PROBLEM 15
                        int q;
                        cout << "Enter the number of queries: ";
                        cin >> q;

                        string S;
                        cout << "Enter the string: ";
                        cin >> S;

                        for (int query = 0; query < q; ++query) {
                            int i, j, k;
                            cout << "Enter query " << query + 1 << " (i, j, k): ";
                            cin >> i >> j >> k;

                            // Adjusting indices to 0-based indexing
                            i--;
                            j--;

                            // Extracting the substring
                            string substring = S.substr(i, j - i + 1);

                            // Sorting the substring based on k
                            if (k == 0) {
                                sort(substring.begin(), substring.end(), greater<char>());
                            } else {
                                sort(substring.begin(), substring.end());
                            }

                            // Replacing the substring in the original string
                            S.replace(i, j - i + 1, substring);
                        }

                        cout << "Final string: " << S << endl;

                        //PROBLEM 16
                        int n;
                        cout << "Enter the size of the sequence: ";
                        cin >> n;

                        vector<int> sequence(n);
                        cout << "Enter the sequence: ";
                        for (int i = 0; i < n; ++i) {
                            cin >> sequence[i];
                        }

                        // Check if the sequence is symmetric
                        bool symmetric = isSymmetric(sequence);

                        // Sort the sequence
                        sort(sequence.begin(), sequence.end());

                        // Output the result
                        cout << (symmetric ? "Symmetric" : "Not symmetric") << endl;
                        cout << "Sorted sequence: ";
                        for (int num: sequence) {
                            cout << num << " ";
                        }
                        cout << endl;

                        //PROBLEM 17
                        // Creating a queue
                        queue<int> myQueue;

                        // Pushing elements into the queue
                        myQueue.push(5);
                        myQueue.push(3);
                        myQueue.push(10);
                        myQueue.push(32);
                        myQueue.push(95);
                        myQueue.push(-4);
                        myQueue.push(29);

                        // Printing the size of the queue
                        cout << "Size of queue: " << myQueue.size() << endl;

                        // Displaying the values at front and back
                        cout << "Value at front: " << myQueue.front() << endl;
                        cout << "Value at back: " << myQueue.back() << endl;

                        // Displaying all elements in the queue
                        cout << "Elements in the queue: ";
                        displayQueue(myQueue);

                        // Deleting all elements in the queue
                        deleteAllElements(myQueue);
                        cout << "Queue after deleting all elements: ";
                        displayQueue(myQueue);


                        //PROBLEM 18
                        // 1. Push numbers into a stack
                        stack<int> myStack;
                        myStack.push(43);
                        myStack.push(90);
                        myStack.push(100);
                        myStack.push(30);
                        myStack.push(28);
                        myStack.push(1);
                        myStack.push(34);

                        // 2. Print the size of the stack
                        cout << "Size of stack: " << myStack.size() << endl;

                        // 3. Display the value at top
                        if (!myStack.empty()) {
                            cout << "Value at top: " << myStack.top() << endl;
                        } else {
                            cout << "Stack is empty." << endl;
                        }

                        // 4. Delete required elements of stack
                        while (!myStack.empty() && myStack.top() != 30) {
                            myStack.pop();
                        }

                        // Print the size after deletion
                        cout << "Size of stack after deletion: " << myStack.size() << endl;


                        return 0;
                    }
                }
            }
        }
    }