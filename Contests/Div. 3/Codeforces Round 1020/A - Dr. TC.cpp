// Description: Solution to count contributions of 1s in binary string for multiple test cases
// Time Complexity: O(t * n), where t is test cases and n is string length
// Space Complexity: O(1) excluding input string storage

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        int stringLength;  // Length of binary string
        string binaryStr;  // Binary string
        cin >> stringLength >> binaryStr;
        
        int countOnes = 0;  // Count of '1's in string
        // Count occurrences of '1'
        for (char c : binaryStr) {
            if (c == '1') {
                countOnes++;
            }
        }
        
        int countZeros = stringLength - countOnes;  // Count of '0's
        // Calculate total contribution: ones * (n-1) + zeros
        int totalContribution = countOnes * (stringLength - 1) + countZeros;
        
        cout << totalContribution << endl;
    }
    
    return 0;
}
