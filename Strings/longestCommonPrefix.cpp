#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans;  // Stores the resulting longest common prefix
    int i = 0;   // Index to iterate through each character of the strings
    
    // Loop until we find a mismatch or go out of bounds
    while (true) {
        char curr_ch = 0;  // Initialize current character as null
        
        // Traditional for loop to iterate through each string in the vector
        for (int j = 0; j < strs.size(); j++) {
            string str = strs[j];  // Access the current string
            
            // If the current index exceeds the length of any string, break
            if (i >= str.size()) {
                curr_ch = 0;
                break;
            }
            
            // If it's the first string in the iteration, set the character for comparison
            if (curr_ch == 0) {
                curr_ch = str[i];
            } 
            // If the current character does not match the previous, break
            else if (str[i] != curr_ch) {
                curr_ch = 0;
                break;
            }
        }
        
        // If there is a mismatch or we have gone out of bounds, break the loop
        if (curr_ch == 0) {
            break;
        }
        
        // If characters match for all strings, add it to the result and move to the next index
        ans.push_back(curr_ch);
        i++;
    }
    
    return ans;  // Return the longest common prefix
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;
    
    return 0;
}
