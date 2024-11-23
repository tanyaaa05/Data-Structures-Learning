#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {

    int l = 0; // Initialize the left pointer to the start of the string.
    int n = s.size(); // Get the size of the string.
    int h = n - 1; // Initialize the right pointer to the end of the string.

    // Loop until the two pointers meet or cross.
    while (l < h) {
        // Check if both characters are alphabetic.
        if (isalpha(s[l]) && isalpha(s[h])) {
            // If both are alphabetic, swap them.
            swap(s[l], s[h]);
            // Move both pointers towards the center.
            l++;
            h--;
        }
        // If s[l] is not alphabetic, move the left pointer right.
        else if (!isalpha(s[l])) {
            l++;
        }
        // If s[h] is not alphabetic, move the right pointer left.
        else {
            h--;
        }
    }
    
    // Return the modified string where only letters are reversed.
    return s;
}

int main() {
    string s = "Test1ng-Leet=code-Q!";
    string result = reverseOnlyLetters(s);
    cout << "Reversed string: " << result << endl;
    return 0;
}
