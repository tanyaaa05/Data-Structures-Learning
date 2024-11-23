#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0; // Start index
    int j = s.length() - 1; // End index

    // Loop to compare characters from both ends
    while (i <= j) {
        // If the characters at i and j don't match, it's not a palindrome
        if (s[i] != s[j]) {
            return false; // Return false if mismatch found
        }
        // Move the indices towards the center
        i++;
        j--;
    }

    // If the entire string has been compared and no mismatches were found
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = isPalindrome(s);

    // Check if the string is a palindrome
    if (result==true) {
        cout << "The string is a valid palindrome." << endl;
    } 
    else {
        cout << "The string is not a valid palindrome." << endl;
    }

    return 0;
}
