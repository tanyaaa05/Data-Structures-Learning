#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
    // Step 1: Define Roman numeral symbols and their corresponding integer values.
    // These arrays are aligned such that each symbol corresponds to its integer value.
    string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string ans = "";  // This will store the resulting Roman numeral.

    // Step 2: Iterate over the predefined Roman numeral values.
    // We start from the largest (1000 for 'M') and go to the smallest (1 for 'I').
    for (int i = 0; i < 13; i++) {
        // Step 3: For each Roman numeral value, append the symbol to the result as long as
        // the number is greater than or equal to the value.
        while (num >= values[i]) {
            ans += romanSymbols[i];  // Append the Roman symbol.
            num -= values[i];        // Reduce the number by the value.
        }
    }

    // Step 4: Return the final Roman numeral string.
    return ans;
}

int main() {
    int num;
    cout << "Enter an integer to convert to Roman numeral: ";
    cin >> num;

    string result = intToRoman(num);
    cout << "The Roman numeral is: " << result << endl;

    return 0;
}
