#include <iostream>
#include <string>
#include <climits> // For INT_MIN and INT_MAX

using namespace std;

int myAtoi(string s) {
    int num = 0;    // To store the resulting number
    int sign = 1;   // To store the sign of the number, initially positive
    
    int i = 0;      // Pointer to traverse the string
    
    // Step 1: Skip leading whitespaces
    while (i < s.size() && s[i] == ' ') {
            i++;
    }

    // Step 2: Check for optional sign character (+ or -)
    if (i < s.size()) {
        if (s[i] == '+') {
            sign = 1; // Positive sign
            i++;
        } else if (s[i] == '-') {
            sign = -1; // Negative sign
            i++;
        }
    }

    // Step 3: Convert numeric characters to integer
    while (i < s.size() && isdigit(s[i])) {
        // Step 4: Handle overflow and underflow
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7)) {
            if (sign == -1) {
                return INT_MIN; // Return INT_MIN in case of underflow
            } else {
                return INT_MAX; // Return INT_MAX in case of overflow214
            }
        }
        
        // Convert current digit to integer and update `num`
        num = num * 10 + (s[i] - '0');
        i++;
    }

    // Step 5: Return the final result with the correct sign
    return num * sign;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    int result = myAtoi(s);
    cout << "The integer is: " << result << endl;

    return 0;
}
