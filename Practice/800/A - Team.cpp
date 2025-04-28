// File: team.cpp
// Description: Solution to count teams with at least two confident members
// Time Complexity: O(n), where n is the number of teams
// Space Complexity: O(1) using only constant extra space

#include <iostream>
using namespace std;

int main() {
    int numTeams;    // Number of teams
    cin >> numTeams;
    
    int validTeams = 0;  // Count of teams with at least two confident members
    
    // Process each team
    for (int i = 0; i < numTeams; ++i) {
        int member1, member2, member3;  // Confidence values (0 or 1)
        cin >> member1 >> member2 >> member3;
        
        // Increment count if team has at least two confident members
        if (member1 + member2 + member3 >= 2) {
            validTeams++;
        }
    }
    
    cout << validTeams << endl;
    
    return 0;
}
