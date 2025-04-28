// File: beautiful_matrix.cpp
// Description: Solution to find minimum moves to center a 1 in a 5x5 matrix
// Time Complexity: O(1) since matrix size is fixed at 5x5
// Space Complexity: O(1) since matrix size is fixed

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize 5x5 matrix
    vector<vector<int>> matrix(5, vector<int>(5));
    
    // Read matrix input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int rowPos, colPos;  // Position of the 1 in matrix
    int moves = 0;       // Number of moves needed
    
    // Find position of 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                rowPos = i;
                colPos = j;
                break;
            }
        }
    }
    
    // Calculate Manhattan distance to center (2,2)
    moves = abs(rowPos - 2) + abs(colPos - 2);
    
    cout << moves << endl;
    
    return 0;
}
