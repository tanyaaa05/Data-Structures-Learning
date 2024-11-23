#include<iostream>
using namespace std;

// Class with static variables
class abc {
public:
    // Static variables x and y, shared across all instances of class abc
    static int x; 
    static int y; 

    // Function to print values of static variables x and y
    void print() const {
        // Prints values of static members x and y
        cout << "X: " << x << " " << "Y: " << y << endl;
    }
};

// Definition and initialization of static members outside the class
// x and y will be shared among all objects of abc
int abc::x; 
int abc::y; 

int main() {

    // Create first object of abc
    abc obj1;  
    // Set the value of static variable x to 10 and y to 20        
    obj1.x = 10;       
    obj1.y = 20;       
    cout << "Printing obj1 " << endl;
    obj1.print();      

    // Create second object of abc
    abc obj2;
    // Update the value of static variable x to 40 and y to 50          
    obj2.x = 40;       
    obj2.y = 50;       
    cout << "Printing obj2 " << endl;
    obj2.print();     

    // Since x and y are static, changes made using obj2 are reflected in obj1
    cout << "Printing obj1 again " << endl;
    // Output x and y values again using obj1 to demonstrate shared state
    obj1.print(); 

    return 0;
}
















// #include<iostream>
// using namespace std;

// class abc{
//     public:
//     int x;
//     int y;

//     void print() const{
//         // hidden parameter: this
//         cout<<"X: "<<this->x<<" "<<"Y: "<<this->y<<endl;
//     }

// };

// int main() {
//     abc obj1 = {1,2};
//     abc obj2 = {4,5};
//     obj1.print();
//     obj2.print();

//     return 0;

// }


















// #include <iostream>
// using namespace std;


// class abc {
// public:
//     int x;  
//     int y;  
    
//     // Static member function
//     static void print() {
//         // Output a message indicating that we are inside the static function
//         //  __FUNCTION__ is a predefined macro that outputs the name of the current function, which will be "print" in this case.
//         cout << "I am in Static function: " << __FUNCTION__ << endl;
//     }
// };

// int main() {

//     // Print a message indicating we're calling 'print' for the first time
//     cout << "Printing obj1: " << endl;
//     abc::print();  // Call the static member function using the class name

//     // Print a message indicating we're calling 'print' for the second time
//     cout << "Printing obj2: " << endl;
//     abc::print();  // Call the static member function again

//     // Print a message indicating we're calling 'print' for the third time
//     cout << "Printing obj1 again: " << endl;
//     abc::print();  // Call the static member function once more

//     return 0;
// }
