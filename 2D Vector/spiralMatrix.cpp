#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m * n;

        // Boundary pointers
        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;

        int count = 0;

        // Traverse the matrix in spiral order
        while (count < total_elements) {
            
            // Print startingRow (left to right)
            for (int i = startingCol; i <= endingCol && count < total_elements; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Print endingCol (top to bottom)
            for (int i = startingRow; i <= endingRow && count < total_elements; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Print endingRow (right to left)
            for (int i = endingCol; i >= startingCol && count < total_elements; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // Print startingCol (bottom to top)
            for (int i = endingRow; i >= startingRow && count < total_elements; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};

int main() {

    // Solution sol; --> This creates an instance of the Solution class, 
    // which contains the spiralOrder() function. The sol object is used to call that function.
    Solution sol;   

    // Example test case
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    // sol.spiralOrder(matrix): This calls the spiralOrder() function 
    // from the Solution class using the sol object. The input is the matrix, 
    // and the function computes the elements in spiral order.
    vector<int> result = sol.spiralOrder(matrix);

    // Traditional for loop to print the result
    cout << "Spiral order: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
