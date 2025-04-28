// File: bear_and_big_brother.cpp
// Description: Solution to count years until Limak's weight exceeds Bob's
// Time Complexity: O(log n), where n is related to the ratio of weights
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int limakWeight;  // Limak's initial weight
    int bobWeight;    // Bob's initial weight
    cin >> limakWeight >> bobWeight;
    
    int years = 0;  // Count of years needed
    
    // Continue until Limak's weight exceeds Bob's
    while (limakWeight <= bobWeight) {
        limakWeight *= 3;  // Limak's weight triples each year
        bobWeight *= 2;    // Bob's weight doubles each year
        years++;
    }
    
    cout << years << endl;
    
    return 0;
}
