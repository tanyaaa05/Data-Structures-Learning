#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0; // Start index
    int n = s.length()-1;
    int j = n; // End index

    // Loop through the string from both ends, moving towards the center
    while (i <= j) {
        
        // If the character at i is not alphanumeric, skip it
        if (!isalnum(s[i])) {
            i++;
            continue;
        }

        // If the character at j is not alphanumeric, skip it
        if (!isalnum(s[j])) {
            j--;
            continue;
        }

        // Compare the lowercase version of characters at i and j
        if (tolower(s[i]) != tolower(s[j])) {
            return false; // Return false if characters don't match
        }

        // Move the indices towards the center
        i++;
        j--;
    }

    // If no mismatches were found, the string is a palindrome
    return true;
}

int main() {

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Use getline to handle spaces in the input

    bool result = isPalindrome(s);
    // Check if the string is a palindrome
    if (result==true) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
