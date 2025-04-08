// Description: Solution to find maximum streak of days with at least one failure
// Time Complexity: O(d * n), where d is days and n is string length
// Space Complexity: O(1) excluding input string storage

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numPeople;     // Number of people (n)
    int numDays;       // Number of days (d)
    cin >> numPeople >> numDays;
    
    int maxStreak = 0;    // Maximum streak of days with at least one '0'
    int currentStreak = 0; // Current streak of days with at least one '0'
    
    // Process each day
    for (int i = 0; i < numDays; ++i) {
        string dayResults;  // String of results for current day
        cin >> dayResults;
        
        // Check if day has at least one '0' (failure)
        if (dayResults.find('0') != string::npos) {
            currentStreak++;
            maxStreak = max(maxStreak, currentStreak);
        } else {
            currentStreak = 0;  // Reset streak if no '0' found
        }
    }
    
    cout << maxStreak << endl;
    
    return 0;
}
