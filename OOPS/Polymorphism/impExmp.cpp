#include <iostream>
using namespace std;

class Maths {
private:
    int a, b, c; // Properties of the Maths class

public:
    // Constructor to initialize the properties a, b, and c
    Maths(int x, int y, int z) : a(x), b(y), c(z) {};

    // Overload the << operator to print all properties of the object
    friend ostream& operator<<(ostream& os, const Maths& obj) {
        os << "Maths Object Properties:\n";
        os << "a = " << obj.a << "\n";
        os << "b = " << obj.b << "\n";
        os << "c = " << obj.c << "\n";
        return os; // Allows chaining of << operations
    }

    // Different versions of sum function (function overloading)
    int sum(int x, int y) { return x + y; }        // Sum of two integers
    int sum(int x, int y, int z) { return x + y + z; } // Sum of three integers
    int sum(int x, float y) { return x + y; }      // Sum of an int and a float
};

int main() {
    // Create an object with initial values for a, b, and c
    Maths obj(5, 7, 10);

    // Use the overloaded << operator to print object properties
    cout << obj;

    return 0;
}




// Explanation of Key Parts:
// (1). Properties and Constructor:
// --> int a, b, c; are private properties of the Maths class.
// --> Maths(int x, int y, int z) : a(x), b(y), c(z) {}; initializes these properties through a constructor.

// (2). Overloading the << Operator:
// --> friend ostream& operator<<(ostream& os, const Maths& obj); is a friend function, allowing it to access private members.
// --> os << "a = " << obj.a << "\n"; prints each property.
// --> return os;   // allows chaining with <<.

// (3). Function Overloading of sum:
// --> Three versions of sum calculate sums based on different argument types and counts.

// (4). Printing the Object:
// --> cout << obj; calls the overloaded << operator, which outputs the properties of obj in a readable format.
