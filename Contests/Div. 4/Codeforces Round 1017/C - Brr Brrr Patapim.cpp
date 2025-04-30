// Description: Solution to construct sequence from n x n matrix for multiple test cases
// Time Complexity: O(t * n^2), where t is test cases and n is matrix dimension
// Space Complexity: O(n^2) for matrix and sequence storage

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numTestCases;  // Number of test cases
    cin >> numTestCases;
    
    // Process each test case
    while (numTestCases--) {
        int matrixSize;  // Size of square matrix (n x n)
        cin >> matrixSize;
        
        // Initialize n x n matrix
        vector<vector<int>> matrix(matrixSize, vector<int>(matrixSize));
        for (int i = 0; i < matrixSize; ++i) {
            for (int j = 0; j < matrixSize; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        // Initialize sequence array for positions 1 to 2n
        vector<int> sequence(2 * matrixSize + 1, 0);
        
        // Assign values to sequence based on specific positions
        for (int k = 2; k <= 2 * matrixSize; ++k) {
            // Calculate i, j for valid matrix positions
            int i = max(0, k - 2 - (matrixSize - 1));
            int j = k - 2 - i;
            if (j >= 0 && j < matrixSize) {
                sequence[k] = matrix[i][j];
            }
        }
        
        // Track used values to find unused number for position 1
        vector<bool> used(2 * matrixSize + 1, false);
        for (int k = 2; k <= 2 * matrixSize; ++k) {
            used[sequence[k]] = true;
        }
        // Assign first unused number to position 1
        for (int x = 1; x <= 2 * matrixSize; ++x) {
            if (!used[x]) {
                sequence[1] = x;
                break;
            }
        }
        
        // Output sequence with spaces between elements
        for (int k = 1; k <= 2 * matrixSize; ++k) {
            cout << sequence[k];
            if (k < 2 * matrixSize) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
