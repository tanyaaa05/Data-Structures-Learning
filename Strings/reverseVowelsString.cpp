#include <iostream>
#include <string>
using namespace std;

// Helper function to check if a character is a vowel (case-insensitive)
bool isVowel(char ch) {
    // Convert character to lowercase
    ch = tolower(ch);
    
    // Check if the character is a vowel
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;  // Return true if vowel
    }
    return false;  // Return false if not a vowel
}

// Function to reverse only the vowels in the string
string reverseVowels(string s) {
    int l = 0;         // Left pointer at the start of the string
    int n = s.size();   // Length of the string
    int h = n - 1;      // Right pointer at the end of the string
    
    // Loop until the two pointers meet
    while (l < h) {
        // If both s[l] and s[h] are vowels, swap them
        if (isVowel(s[l]) && isVowel(s[h])) {
            swap(s[l], s[h]);  // Swap vowels at index l and h
            l++;  // Move the left pointer right
            h--;  // Move the right pointer left
        }
        // If s[l] is not a vowel, move the left pointer right
        else if (!isVowel(s[l])) {
            l++;
        }
        // If s[h] is not a vowel, move the right pointer left
        else {
            h--;
        }
    }
    
    return s;  // Return the modified string with reversed vowels
}

int main() {
    string s = "hello world";
    cout << "Original string: " << s << endl;
    
    // Call the reverseVowels function
    string result = reverseVowels(s);
    
    cout << "String after reversing vowels: " << result << endl;
    return 0;
}
