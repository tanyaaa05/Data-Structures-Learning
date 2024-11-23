#include <iostream>  
using namespace std;

class Maths {  
public:
    int val;  // Public integer member variable to store a value.

    // Overloaded + operator function that takes another Param object as an argument.
    void operator+(Maths& obj2) {
        int value1 = this->val;  // Accesses 'val' of the calling object (object1).
        int value2 = obj2.val;    // Accesses 'val' of the passed object (object2).
        
        // Prints the difference between 'val' of obj2 and 'val' of the calling object.
        cout << (value2 - value1) << endl;
    }
};

int main() {

    Maths object1, object2;  

    // Assigns values to the 'val' member variable of each object.
    object1.val = 7;
    object2.val = 5;

    // Uses the overloaded + operator to print the difference between object2's 'val'
    // and object1's 'val' (3 - 7 = -4).
    object1 + object2;

    return 0;
}
