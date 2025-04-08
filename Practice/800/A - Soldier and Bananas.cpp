// File: soldier_and_bananas.cpp
// Description: Solution to calculate amount to borrow for buying bananas
// Time Complexity: O(1) as it performs constant-time operations
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int costPerBanana;    // Cost of first banana (k)
    int initialMoney;     // Initial amount of money (n)
    int numBananas;       // Number of bananas wanted (w)
    
    // Read input
    cin >> costPerBanana >> initialMoney >> numBananas;
    
    // Calculate total cost using sum of arithmetic sequence: k * w * (w + 1) / 2
    int totalCost = costPerBanana * numBananas * (numBananas + 1) / 2;
    
    // Calculate amount to borrow (cost - initial money)
    int borrowAmount = totalCost - initialMoney;
    
    // If no borrowing needed (negative result), set to 0
    if (borrowAmount < 0) {
        borrowAmount = 0;
    }
    
    cout << borrowAmount << endl;
    
    return 0;
}
