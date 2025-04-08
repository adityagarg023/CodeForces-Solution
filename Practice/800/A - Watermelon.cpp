// File: watermelon.cpp
// Description: Solution to check if a weight can be split into two even parts
// Time Complexity: O(1) as it performs constant-time operations
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int weight;           // Input weight in kilograms
    cin >> weight;        // Read input
    
    // Check if weight is even and greater than 2
    // (minimum even split possible is 2 + 2 = 4)
    if (weight % 2 == 0 && weight > 2) {
        cout << "YES" << endl;  // Can be split into two even parts
    } else {
        cout << "NO" << endl;   // Cannot be split into two even parts
    }
    
    return 0;
}
