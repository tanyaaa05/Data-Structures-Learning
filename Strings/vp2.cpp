#include <iostream>
using namespace std;

// Helper function to check if a substring is a palindrome
bool checkPalindrome(string s, int i, int j) {
    while (i <= j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// Main function to check if the string can become a palindrome
// by removing at most one character, and returns the index of the removed character.
int validPalindrome(string s) {
    int i = 0; // Start index
    int n = s.length();
    int j = n - 1; // End index
    
    // Loop through the string from both ends
    while (i <= j) {
        if (s[i] != s[j]) {
            // If removing s[i] results in a palindrome, return i
            if (checkPalindrome(s, i + 1, j)) {
                return i;
            }
            // If removing s[j] results in a palindrome, return j
            else if (checkPalindrome(s, i, j - 1)) {
                return j;
            }
            // If neither removal works, return -1 (no valid palindrome by one removal)
            else {
                return -1;
            }
        } 
        else {
            // If characters at i and j match, move pointers inward --> s[i]==s[j];
            i++;
            j--;
        }
    }

    // Return -1 if no character needs to be removed (the string is already a palindrome)
    return -1;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = validPalindrome(s);

    // Output the result
    if (result == -1) {
        cout << "The string is already a palindrome or cannot be made one by removing just one character." << endl;
    } else {
        cout << "The string can become a palindrome by removing the character at index " << result << "." << endl;
    }

    return 0;
}
