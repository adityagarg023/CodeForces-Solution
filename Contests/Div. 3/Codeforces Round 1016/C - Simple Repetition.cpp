// Description: Solution to check if number formed by repeating string k times is prime
// Time Complexity: O(t * (k * n + sqrt(y))), where t is test cases, n is string length, y is resulting number
// Space Complexity: O(k * n) for the repeated string

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }
    // Check divisibility up to square root of n
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        string inputStr;  // Input string
        int repeatCount;  // Number of times to repeat string
        cin >> inputStr >> repeatCount;
        
        // Build repeated string
        string repeatedStr = "";
        while (repeatCount--) {
            repeatedStr += inputStr;
        }
        
        // If number exceeds long long range, it's not prime
        if (repeatedStr.size() > 18) {
            cout << "NO\n";
            continue;
        }
        
        // Convert string to number and check if prime
        long long number = stoll(repeatedStr);
        cout << (isPrime(number) ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
