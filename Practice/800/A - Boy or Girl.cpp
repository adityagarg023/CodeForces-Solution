// File: boy_or_girl.cpp
// Description: Solution to determine chat decision based on distinct characters in name
// Time Complexity: O(n log n), where n is the length of the input string
// Space Complexity: O(k), where k is the number of unique characters (max 26)

#include <iostream>
#include <set>
using namespace std;

int main() {
    string name;              // Input name
    cin >> name;             // Read input
    
    set<char> uniqueLetters;  // Set to store unique characters
    
    // Insert each character into set (duplicates automatically handled)
    for (char ch : name) {
        uniqueLetters.insert(ch);
    }
    
    // If number of unique letters is even, chat; if odd, ignore
    if (uniqueLetters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
