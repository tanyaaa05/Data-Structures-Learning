#include <iostream> 
using namespace std; 

// Parent class A
class A {
    // State or Properties
    public:
    int Physics; // Public integer variable to store Physics marks
};

// Parent class B
class B {
    // State or Properties
    public:
    int Chemistry; // Public integer variable to store Chemistry marks
};

// Child class C that inherits from both A and B
class C : public A, public B {
    public:
    int Maths; // Public integer variable to store Maths marks
};

// Main function
int main() {
    
    // Create an object of class C
    C obj;

    // Set values for inherited properties from A and B, as well as its own property
    obj.Physics = 72;   // Setting Physics marks, inherited from class A
    obj.Chemistry = 90; // Setting Chemistry marks, inherited from class B
    obj.Maths = 85;     // Setting Maths marks, a member of class C
    
    cout << obj.Physics << " " << obj.Chemistry << " " << obj.Maths << endl;

    return 0;
}
