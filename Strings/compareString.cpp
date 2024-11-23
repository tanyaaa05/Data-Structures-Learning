#include<iostream>
#include<string>
using namespace std;

bool compareString(string a, string b) {
    if(a.length() != b.length()) {
        return false;
    }
    else {
        for(int i = 0; i < a.length(); i++) {
            if(a[i] != b[i]) { // Compare corresponding characters
                return false;
            }
        }
        return true; // Strings are the same if all characters match
    }
}

int main() {
    string a, b;
    getline(cin, a); // Input for string a
    getline(cin, b); // Input for string b

    // Call the function and store the result
    bool result = compareString(a, b);

    // Output the correct result based on comparison
    if(result==true) {
        cout << "a and b are exactly the same strings" << endl;
    }
    else {
        cout << "a and b are not the same" << endl;
    }

    return 0;
}
