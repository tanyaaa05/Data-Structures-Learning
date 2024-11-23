#include <iostream>
using namespace std;

// Function to calculate the GCD of two numbers using the subtraction method
int gcd(int a, int b) {
    // If one number is 0, return the other (base case)
    if (a == 0) return b;
    if (b == 0) return a;

    // Keep reducing the numbers by subtracting the smaller from the larger
    while (a > 0 && b > 0) {
        if (a > b) {
            // Subtract b from a if a is larger
            a = a - b;
        } else {
            // Subtract a from b if b is larger
            b = b - a;
        }
    }

    // Return the non-zero number as the GCD
    // return a == 0 ? b : a;

    // Traditional return: If 'a' becomes 0, GCD is 'b'; if 'b' becomes 0, GCD is 'a'
     if (a == 0) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a, b;
    
    // Input the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Calculate and print the GCD
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}
