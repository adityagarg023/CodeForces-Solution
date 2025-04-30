// Description: Solution to calculate minimum steps to cover distance with max step size 5
// Time Complexity: O(1) as it performs constant-time operations
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int distance;  // Distance to cover
    cin >> distance;
    
    // Calculate steps: divide by 5 and add 1 if there's a remainder
    int steps = distance / 5;
    if (distance % 5 != 0) {
        steps++;
    }
    
    cout << steps << endl;
    
    return 0;
}
