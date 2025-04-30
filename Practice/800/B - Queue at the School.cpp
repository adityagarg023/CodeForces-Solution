// Description: Solution to simulate adjacent BG swaps in a queue string
// Time Complexity: O(t * n), where t is time steps and n is string length
// Space Complexity: O(1) excluding input string storage

#include <iostream>
#include <string>
using namespace std;

int main() {
    int queueLength;  // Length of queue (n)
    int timeSteps;    // Number of time steps (t)
    cin >> queueLength >> timeSteps;
    
    string queue;     // String representing queue
    cin >> queue;
    
    // Process each time step
    while (timeSteps--) {
        // Check for adjacent BG pairs and swap
        for (int i = 0; i < queueLength - 1; i++) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                swap(queue[i], queue[i + 1]);
                i++;  // Skip next position to avoid double-swapping
            }
        }
    }
    
    cout << queue << endl;
    
    return 0;
}
