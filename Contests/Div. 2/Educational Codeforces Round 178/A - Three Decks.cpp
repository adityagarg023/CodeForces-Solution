// Description: Solution to check if three numbers can be balanced into equal groups
// Time Complexity: O(t), where t is the number of test cases
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        int num1, num2, num3;  // Input numbers
        cin >> num1 >> num2 >> num3;
        
        int total = num1 + num2 + num3;  // Sum of the three numbers
        
        // Check if total is divisible by 3
        if (total % 3 == 0) {
            int target = total / 3;  // Target value for each group
            // Check if target is achievable
            if (target >= num1 && target >= num2 && target <= num3) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";  // Not divisible by 3, impossible to balance
        }
    }
    
    return 0;
}
