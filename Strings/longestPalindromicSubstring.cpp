#include <iostream>
#include <string>
using namespace std;

// Helper function to check if a substring is a palindrome
bool isPalindrome(string& s, int start, int end) {
    // Compare characters from start to end
    while (start < end) {
        if (s[start] != s[end]) {
            return false;  // Return false if characters don't match
        }
        // Move pointers towards the center
        start++;
        end--;
    }
    return true;  // Return true if the substring is a palindrome
}

// Main function to find the longest palindromic substring
string longestPalindrome(string s) {
    string ans = "";  // Initialize an empty string to store the result
    
    // Loop through each substring starting from each index i
    for (int i = 0; i < s.size(); i++) {
        // For each index i, consider all substrings that start at i and end at j
        for (int j = i; j < s.size(); j++) {
            
            // Check if the substring s[i..j] is a palindrome
            if (isPalindrome(s, i, j)) {
                // If it's a palindrome, extract the substring
                string t = s.substr(i, j - i + 1);
                
                // If the current palindrome substring is longer than the previously found one, update the answer
                if (t.size() > ans.size()) {
                    ans = t;  // Update ans if t is longer
                }
                // ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    return ans;  // Return the longest palindromic substring
}

int main() {
    string s = "babad";
    cout << "Original string: " << s << endl;
    
    // Call the longestPalindrome function
    string result = longestPalindrome(s);
    
    cout << "Longest palindromic substring: " << result << endl;
    return 0;
}
