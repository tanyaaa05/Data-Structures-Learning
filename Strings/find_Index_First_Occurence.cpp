#include <iostream>
#include <string>

using namespace std;

// Function to find the first occurrence of the substring 'needle' in the string 'haystack'
int strStr(string haystack, string needle) {
    int n = haystack.size();  // Length of haystack
    int m = needle.size();    // Length of needle

    // Step 1: If needle is an empty string, return 0 as per the problem statement.
    if (m == 0) {
        return 0;
    }

    // Step 2: Iterate through haystack up to the point where remaining characters
    // are at least as many as the length of the needle.
    for (int i = 0; i <= n - m; i++) {
        // Step 3: Check if the substring of haystack starting at index i matches needle
        int j;
        for ( j = 0; j < m; j++) {
            // Step 4: If characters don't match, break the inner loop
            if (needle[j] != haystack[i + j]) {
                break;
            }
        }

        // Step 5: If inner loop completed without breaking, that means a match was found
        // Return the index 'i' where the match starts
        if (j == m) {
            return i;
        }
    }

    // Step 6: If no match was found, return -1 as required
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter the haystack string: ";
    cin >> haystack;
    cout << "Enter the needle string: ";
    cin >> needle;

    int result = strStr(haystack, needle);

    if (result == -1) {
        cout << "Needle not found in haystack." << endl;
    } else {
        cout << "The first occurrence of needle in haystack is at index: " << result << endl;
    }

    return 0;
}
