#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    // Array to map each character of 's' to a corresponding character in 't'
    int hash[256] = {0};  // 256 to cover all ASCII characters
    
    // Array to check if a character in 't' is already mapped to a character in 's'
    bool istCharsMapped[256] = {0};  // Keeps track of characters already used from 't'
    
    // Step 1: Iterate over the strings to map characters
    for (int i = 0; i < s.size(); i++) {
        // If the current character of 's' is not yet mapped and 't[i]' is not used
        if (hash[s[i]] == 0 && istCharsMapped[t[i]] == false) {
            hash[s[i]] = t[i];  // Map s[i] to t[i]
            istCharsMapped[t[i]] = true;  // Mark t[i] as mapped
        }
    }

    // Step 2: Verify if the mapping holds for the rest of the string
    for (int i = 0; i < s.size(); i++) {
        // If the current character of 's' does not map to the corresponding character of 't'
        if (hash[s[i]] != t[i]) {
            return false;  // Not isomorphic
        }
    }

    // If all characters are mapped correctly, return true
    return true;
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;
    
    // Check if the two strings are isomorphic
    bool result = isIsomorphic(s, t);
    
    if(result == true) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }
    
    return 0;
}
