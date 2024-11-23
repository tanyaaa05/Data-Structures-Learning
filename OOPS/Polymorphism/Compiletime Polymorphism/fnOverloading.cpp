#include <iostream>
using namespace std;

// Define a class named Maths to hold multiple overloaded sum functions
class Maths {
public:
    // First version (or signature) of the sum function with two integer parameters
    int sum(int a, int b) {
        cout << "I am first signature: " << endl;
        return a + b; // Returns the sum of two integers
    }

    // Second version of the sum function with three integer parameters
    int sum(int a, int b, int c) {
        cout << "I am second signature: " << endl;
        return a + b + c; // Returns the sum of three integers
    }

    // Third version of the sum function with an integer and a float parameter
    int sum(int a, float b) {
        cout << "I am third signature: " << endl;
        return a + b; // Returns the sum of an integer and a float, with float implicitly converted to int
    }
};

int main() {
    Maths obj; // Create an object of the Maths class

    // Calls the first version of sum (two integers), so it prints "I am first signature"
    cout << obj.sum(5, 7) << endl;

    // Calls the second version of sum (three integers), so it prints "I am second signature"
    cout << obj.sum(5, 7, 2) << endl;

    // Calls the third version of sum (int and float), so it prints "I am third signature"
    cout << obj.sum(5, 5.29f) << endl;

    return 0;
}


// Each call to sum invokes the appropriate overloaded version 
// based on the arguments passed, showcasing function overloading.
