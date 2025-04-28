// File: next_round.cpp
// Description: Solution to count participants advancing in a competition
// Time Complexity: O(n), where n is the number of participants
// Space Complexity: O(n) for the score array

#include <iostream>
using namespace std;

int main() {
    int numParticipants;  // Number of participants (n)
    int kthPlace;        // K-th place to compare against (k)
    cin >> numParticipants >> kthPlace;
    
    // Array to store scores
    int scores[numParticipants];
    for (int i = 0; i < numParticipants; i++) {
        cin >> scores[i];
    }
    
    int advanceCount = 0;  // Count of participants advancing
    
    // Count participants with score >= k-th place score and positive
    for (int i = 0; i < numParticipants; i++) {
        if (scores[i] >= scores[kthPlace - 1] && scores[i] > 0) {
            advanceCount++;
        }
    }
    
    cout << advanceCount << endl;
    
    return 0;
}
