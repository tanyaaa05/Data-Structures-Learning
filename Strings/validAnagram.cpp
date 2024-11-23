#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {

    // Step 1: Create a frequency table for all characters (256 ASCII values).
    int freqTable[256] = {0};  // Initializes all elements to 0.
    
    // Step 2: Count the frequency of each character in string `s`.
    for (int i = 0; i < s.size(); i++) {
        freqTable[s[i]]++;  // Increment the count for each character in `s`.
    }    // Time Complexity: O(n), where `n` is the size of string `s`.
    
    // Step 3: Subtract the frequency of each character in string `t`.
    for (int i = 0; i < t.size(); i++) {
        freqTable[t[i]]--;  // Decrement the count for each character in `t`.
    }    // Time Complexity: O(m), where `m` is the size of string `t`.
    
    // Step 4: Check if any value in the frequency table is non-zero.
    // If any value is non-zero, then `s` and `t` are not anagrams.
    for (int i = 0; i < 256; i++) {
        if (freqTable[i] != 0) {
            return false;  // If any frequency is non-zero, it's not an anagram.
        }
    }    // Time Complexity: O(256) which is constant time.
    
    // Step 5: If no discrepancies are found, return true indicating `s` and `t` are anagrams.
    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    bool result = isAnagram(s, t);
    
    if (result==true) {
        cout << s << " and " << t << " are anagrams." << endl;
    } else {
        cout << s << " and " << t << " are not anagrams." << endl;
    }

    return 0;
}
