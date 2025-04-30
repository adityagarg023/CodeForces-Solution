// Description: Solution to output first characters of three strings for multiple test cases
// Time Complexity: O(t), where t is the number of test cases
// Space Complexity: O(1) excluding input string storage

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        string str1, str2, str3;  // Input strings
        cin >> str1 >> str2 >> str3;
        
        // Output first character of each string
        cout << str1[0] << str2[0] << str3[0] << endl;
    }
    
    return 0;
}
