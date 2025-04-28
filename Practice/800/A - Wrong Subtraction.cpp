// File: wrong_subtraction.cpp
// Description: Solution to perform k operations on a number (divide by 10 if ends in 0, else subtract 1)
// Time Complexity: O(k), where k is the number of operations
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int number;       // Initial number (n)
    int operations;   // Number of operations to perform (k)
    cin >> number >> operations;
    
    // Perform k operations
    while (operations--) {
        if (number % 10 == 0) {
            number /= 10;  // Divide by 10 if number ends in 0
        } else {
            number--;      // Subtract 1 if number doesn't end in 0
        }
    }
    
    cout << number << endl;
    
    return 0;
}
