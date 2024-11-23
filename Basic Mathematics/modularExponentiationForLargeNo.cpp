#include <iostream>
using namespace std;

// Function to compute (a^b) % M using modular exponentiation
long long int powMod(long long int a, long long int b, long long int M) {
    long long ans = 1;

    while (b > 0) {
        // Check if b is odd
        if (b & 1) {   
            // If b is odd, multiply ans with a
            ans = (ans * a) % M;
        }
        // Square a and reduce b
        a = (a * a) % M;
        b >>= 1; // Right shift b to divide it by 2
    }
    return ans % M; // Return the result modulo M
}

int main() {
    long long int a, b, M;
    
    // Input the base, exponent, and modulus
    cout << "Enter base (a), exponent (b), and modulus (M): ";
    cin >> a >> b >> M;

    // Handle edge case: if M is 0
    if (M == 0) {
        cout << "Modulus cannot be zero." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the result
    cout << "Final result is: " << powMod(a, b, M) << endl;

    return 0;
}
