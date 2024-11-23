#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    string ans = ""; // This will store the result string without duplicates
    int i = 0; // Index to traverse the input string

    // Loop through the input string
    while (i < s.length()) {
        // If 'ans' has at least one character and the last character in 'ans' 
        // is the same as the current character in 's', remove the last character from 'ans'
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i]) {
            ans.pop_back(); // Remove the last character (duplicate)
        } 
        else {
            // Otherwise, add the current character to 'ans'
            ans.push_back(s[i]);
        }
        i++; // Move to the next character in the input string
    }

    return ans; // Return the final string without adjacent duplicates
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = removeDuplicates(s);
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
