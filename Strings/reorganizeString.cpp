#include <iostream>
#include <vector>
#include <string>
#include <climits> // For INT_MIN
using namespace std;

string reorganizeString(string s) {
    int hash[26] = {0}; // Array to store frequency of each character (a-z)

    // Step 1: Count the frequency of each character in the string
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; // Increment the count of the corresponding character
    }

    // Step 2: Find the character with the maximum frequency
    char max_freq_char;  // Character with the maximum frequency
    int max_freq = INT_MIN;  // Initialize to a very small value (negative infinity)

    for (int i = 0; i < 26; i++) {
        if (hash[i] > max_freq) {
            max_freq = hash[i];  // Update maximum frequency
            max_freq_char = i + 'a';  // Set character with the maximum frequency
        }
    }

    // Step 3: Place the most frequent character at even positions (0, 2, 4, ...)
    int index = 0; // Start placing the characters from index 0 (even index)
    
    // Place the most frequent character at every alternate position
    while (max_freq > 0 && index < s.size()) {
        s[index] = max_freq_char;
        max_freq--;
        index += 2; // Move to the next alternate index
    }

    // If there are still characters left from the most frequent character, return empty string
    // This means it's impossible to reorganize the string without consecutive identical characters
    if (max_freq != 0) {
        return "";
    }

    // Mark the most frequent character as fully placed
    hash[max_freq_char - 'a'] = 0;

    // Step 4: Place the rest of the characters in the remaining positions
    // Continue placing other characters, first filling even indices, then odd indices
    for (int i = 0; i < 26; i++) {
        while (hash[i] > 0) {

            // If index goes out of bounds (i.e., index >= s.size()), 
            // we reset it to 1 to start placing characters in odd indices.
            // If we have filled all even indices, move to the odd indices
            if (index >= s.size()) {
                index = 1; // Start placing at odd indices
            }
            
            s[index] = i + 'a';  // Place the character in the string
            hash[i]--;  // Decrement the frequency of the character
            index += 2; // Move to the next alternate position
        }
    }

    return s;
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;
    
    string result = reorganizeString(input);
    
    if (result.empty()) {
        cout << "The string cannot be reorganized to avoid consecutive identical characters." << endl;
    } else {
        cout << "Reorganized string: " << result << endl;
    }

    return 0;
}
