#include <iostream>
#include <string>

using namespace std;

// Function to expand around the center and count palindromic substrings
int expandAroundIndex(string s, int left, int right) {
    int count = 0; // This will store the number of palindromes found

    // While the characters are the same and the indices are within bounds
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;   // Increment the count for each palindrome found
        left--;       // Move the left pointer to the left
        right++;       // Move the right pointer to the right
    }

    return count;  // Return the total count of palindromes found in this expansion
}

// Function to count all palindromic substrings in the given string
int countSubstrings(string s) {
    int totalCount = 0;  // This will store the total count of palindromic substrings
    int n = s.length(); // Get the length of the string

    // Iterate through each character in the string
    for (int center = 0; center < n; center++) {
        // Count palindromes with odd length (expanding around a single character)
        int oddKaAns = expandAroundIndex(s, center, center);  // Expand around the single center `i`
         totalCount += oddKaAns;  // Add the result to the total count

        // Count palindromes with even length (expanding around two adjacent characters)
        int evenKaAns = expandAroundIndex(s, center, center + 1);  // Expand around two centers `i` and `i+1`
         totalCount += evenKaAns;  // Add the result to the total count
    }

    return  totalCount;  // Return the total number of palindromic substrings
}

int main() {
    string s = "abc";  // Input string for which we need to count palindromic substrings
    cout << "Number of palindromic substrings: " << countSubstrings(s) << endl;  // Output result
    return 0;
}
