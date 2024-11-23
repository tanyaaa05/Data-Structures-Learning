#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {

    // Find the first occurrence of the substring 'part' in string 's'
    int pos = s.find(part);

    // Keep removing occurrences of 'part' as long as they are found in 's'
    while (pos != string::npos) { // 'npos' indicates no occurrence was found
    
        // Erase the substring 'part' from 's' starting at position 'pos'
        s.erase(pos, part.length());
        
        // Find the next occurrence of 'part' in the updated string 's'
        pos = s.find(part);
    }

    // Return the modified string after all occurrences of 'part' have been removed
    return s;
}

int main() {
    string s, part;
    cout << "Enter the main string: ";
    cin >> s;
    cout << "Enter the substring to remove: ";
    cin >> part;

    string result = removeOccurrences(s, part);
    cout << "String after removing occurrences: " << result << endl;

    return 0;
}
