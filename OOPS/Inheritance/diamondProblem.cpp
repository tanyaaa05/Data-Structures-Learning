#include <iostream>
using namespace std;

// Base class
class A {
public:
    int Physics;
};

// Derived classes inheriting from A
class B : public A {
public:
    int Chemistry;
};

class D : public A {
public:
    int Biology;
};

// Derived class inheriting from both B and D
class C : public B, public D {
public:
    int Maths;
};

int main() {
    C obj;

    // Ambiguity: `Physics` is inherited from both B and D, creating two copies of A
    obj.B::Physics = 80; // Accessing Physics from B's side
    obj.D::Physics = 75; // Accessing Physics from D's side

    obj.Chemistry = 90;
    obj.Biology = 94;
    obj.Maths = 85;

    cout << "Physics from B: " << obj.B::Physics << endl;
    cout << "Physics from D: " << obj.D::Physics << endl;
    cout << "Chemistry: " << obj.Chemistry << endl;
    cout << "Biology: " << obj.Biology << endl;
    cout << "Maths: " << obj.Maths << endl;

    return 0;
}













// #include <iostream>
// using namespace std;

// class A {
// public:
//     void display() {
//         cout << "Display from class A" << endl;
//     }
// };

// class B : public A { }; // B inherits from A
// class C : public A { }; // C inherits from A

// class D : public B, public C { }; // D inherits from both B and C

// int main() {
//     D obj;
//     obj.display(); // Ambiguity: Which display() should be called?
//     return 0;
// }
