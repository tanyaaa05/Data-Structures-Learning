#include<iostream>
#include <vector>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    // If numRows is 1, the result is the same as the input string
    if(numRows == 1) return s;

    // Vector of strings to store characters for each row
    vector<string> zigzag(numRows);

    // Initialize index i to 0 for traversing the input string
    int i = 0;

    // Variable to track which row we are currently in
    int row = 0;

    // Boolean direction to track movement (Top to Bottom = true, Bottom to Top = false)
    bool direction = true;  // true represents moving downward (Top to Bottom)

    // Infinite loop to simulate the zigzag pattern
    while (true) {
        // Moving Top to Bottom
        if (direction) {
            // Add characters to rows starting from row 0 to row numRows-1
            while (row < numRows && i < s.size()) {
                zigzag[row++].push_back(s[i++]);  // Place character in the current row
            }
            // After reaching the bottom, switch direction to Bottom to Top
            row = numRows - 2;  // Prepare to move upwards (so row decreases)
        } 
        // Moving Bottom to Top
        else {
            // Add characters to rows starting from row numRows-2 to row 0
            while (row >= 0 && i < s.size()) {
                zigzag[row--].push_back(s[i++]);  // Place character in the current row
            }
            // After reaching the top, switch direction to Top to Bottom
            row = 1;  // Prepare to move downwards again (so row increases)
        }

        // Break out of the loop when all characters from the input string are processed
        if (i >= s.size()) {
            break;
        }

        // Toggle the direction: from down to up, or from up to down
        direction = !direction;
    }

    // Concatenate all rows to form the final zigzag string
    string ans = "";
    for (int i = 0; i < zigzag.size(); i++) {
        ans += zigzag[i];  // Append each row's characters to the final answer
    }

    return ans;  // Return the final zigzag pattern as a single string
}

int main() {
    string s = "ABCDEFGH";
    int numRows = 3;

    // Call the convert function and print the result
    string result = convert(s, numRows);
    cout << "Zigzag pattern: " << result << endl;

    return 0;
}