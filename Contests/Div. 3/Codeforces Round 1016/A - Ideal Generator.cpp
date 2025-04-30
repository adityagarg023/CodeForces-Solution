// Description: Solution to check if numbers are odd across multiple test cases
// Time Complexity: O(t), where t is the number of test cases
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        int number;  // Number to check
        cin >> number;
        
        // Check if number is odd
        if (number % 2 == 1) {
            cout << "YES" << endl;  // Odd number
        } else {
            cout << "NO" << endl;   // Even number
        }
    }
    
    return 0;
}
