#include<iostream>
using namespace std;

class abc {
    public:
    int x;
    int *y;

    abc(int _x, int _y): x(_x), y(new int(_y)) {}

    // default dumb copy constructor: it does SHALLOW copy
    // abc(const abc &obj) {
    //     x=obj.x;
    //     y=obj.y;
    // }

    void print() const{
        cout << "X: " << x <<endl << "PTR Y: " << y << endl <<"Content of Y (*y): " << *y<<endl<<endl;
    }
};

int main() {
    abc a(1,2);
    cout<<"Printing a: "<<endl;
    a.print();

    // abc b(a);
    abc b = a;
    cout<<"Printing b: "<<endl;
    b.print();
    *b.y=20;
    cout<<"Printing b: "<<endl;
    b.print();

    cout<<"Printing a: "<<endl;
    a.print();

    return 0;
}














// #include <iostream>
// using namespace std;

// class abc {
//     public:
//     int x;
//     int *y;

//     // Constructor
//     abc(int _x, int _y) : x(_x), y(new int(_y)) {}

//     // default dumb copy constructor: it does SHALLOW copy
//     // abc(const abc &obj) {
//     //     x=obj.x;
//     //     y=obj.y;
//     // }

//     // Print method
//     void print() const {
//         cout << "X: " << x << endl << "PTR Y: " << y << endl << "Content of Y (*y): " << *y << endl << endl;
//     }

//     // Destructor (single)
//     ~abc() {
//         delete y;  // Only delete y since x is not a pointer
//     }
// };

// int main() {
//     abc *a = new abc(1, 2);
//     abc b = *a;  // Uses copy constructor
//     delete a;    // Deletes a, but b should still have valid data
//     b.print();

//     return 0;
// }
