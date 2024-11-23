#include <iostream>
using namespace std;

// Helper function to check if a substring is a palindrome
bool checkPalindrome(string s, int i, int j) {
    // Check characters from both ends towards the center
    while (i <= j) {
        // If characters at i and j don't match, return false
        if (s[i] != s[j]) {
            return false;
        }
        // Move pointers towards the center
        i++;
        j--;
    }
    // If no mismatches are found, return true
    return true;
}

// Main function to check if the string can become a palindrome
// by removing at most one character
bool validPalindrome(string s) {
    int i = 0; // Start index
    int n = s.length();
    int j = n-1; // End index
    
    // Loop through the string from both ends
    while (i <= j) {
        // If characters at i and j don't match
        if (s[i] != s[j]) {
            // Check if the string is a palindrome by either:
            // (i). Removing the character at i (i+1, j)
            // (ii). Removing the character at j (i, j-1)
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        } else {
            // If characters at i and j match, move pointers inward --> s[i]==s[j];
            i++;
            j--;
        }
    }

    // If the loop completes, the string is already a palindrome
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    bool result = validPalindrome(s);

    // Check if the string is a valid palindrome
    if (result==true) {
        cout << "The string can be a valid palindrome by removing at most one character." << endl;
    } else {
        cout << "The string cannot be a valid palindrome even with one removal." << endl;
    }

    return 0;
}
