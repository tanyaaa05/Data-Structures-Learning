#include <iostream>
using namespace std;

class abc {
public:
    int x;      // Public integer member variable
    int *y;     // Pointer to an integer (used to demonstrate deep copying)

    // Constructor to initialize x and allocate memory for y
    abc(int _x, int _y): x(_x), y(new int(_y)) {}

    // Deep copy constructor
    abc(const abc &obj) {
        x = obj.x;           // Copy the value of x directly
        y = new int(*obj.y);  // Allocate new memory for y and copy the content of obj.y into it
    }

    // Print function to display values of x, y (the address), and *y (the content)
    void print() const {
        cout << "X: " << x <<endl << "PTR Y: " << y << endl <<"Content of Y (*y): " << *y<<endl<<endl;
    }
};

int main() {
    abc a(1, 2);         // Create an object 'a' with x=1 and *y=2
    cout << "Printing a: " << endl;
    a.print();           // Display values of x, address of y, and content of *y in 'a'

    abc b = a;           // Copy constructor creates 'b' as a deep copy of 'a'
    cout << "Printing b: " << endl;
    b.print();           // Display values of x, address of y, and content of *y in 'b'

    *b.y = 20;           // Modify *y in object 'b' to 20
    cout << "Printing b: " << endl;
    b.print();           // Display modified values of x, address of y, and content of *y in 'b'

    cout << "Printing a: " << endl;
    a.print();           // Print values of 'a' to confirm it is unaffected by changes in 'b'

    return 0;
}
