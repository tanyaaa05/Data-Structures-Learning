#include <iostream>
#include <vector>
#include <algorithm> // For reverse function

using namespace std;

int compress(vector<char>& s) {
    int index = 0;    // Index where the compressed result will be stored
    int count = 1;    // To count occurrences of each character
    char prev = s[0]; // Previous character starts with the first element

    // Iterate through the vector starting from the second character
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == prev) {
            // If the current character is the same as the previous one, increment the count
            count++;
        } else {
            // Otherwise, store the previous character in the compressed version
            s[index] = prev;
            index++;

            // If the count is more than 1, convert the count to a string and store it
            if (count > 1) {
                int start = index;  // Keep track of the starting position for the count digits
                while (count) {
                    s[index] = (count % 10) + '0';  // Extract each digit and convert to a character
                    index++;
                    count /= 10; // Divide the count by 10 to get the next digit
                }
                // Since the digits were added in reverse order, we need to reverse them
                reverse(s.begin() + start, s.begin() + index);
            }

            // Move to the next character, reset count to 1, and update `prev`
            prev = s[i];
            count = 1;
        }
    }

    // Handle the last group of characters after the loop ends
    s[index] = prev;
    index++;
    
    // If the last character had more than one occurrence, add its count
    if (count > 1) {
        int start = index;
        while (count) {
            s[index] = (count % 10) + '0';
            index++;
            count /= 10;
        }
        reverse(s.begin() + start, s.begin() + index);
    }

    // Return the new length of the compressed array
    return index;
}

int main() {
    vector<char> s = {'a', 'a', 'a', 'b', 'b', 'c', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd'};
    
    // Call the compress function and print the compressed length
    int compressedLength = compress(s);
    
    // Print the compressed characters
    for (int i = 0; i < compressedLength; i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
