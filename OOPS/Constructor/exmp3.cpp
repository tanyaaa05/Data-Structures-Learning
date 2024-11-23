#include<iostream>
using namespace std;

class Box {

    int width;

    public:
    // ctor
    Box (int w): width(w) {};

    int getWidth() const {
        return width;
    }
    void setWidth(int _val) {
        width = _val;
    }

};

int main() {

    Box b(5);
    cout<<"Width is: "<<b.getWidth()<<endl;
    
    return 0;
}












// // make ctor private
// #include<iostream>
// using namespace std;

// // Define the Box class
// class Box {
// private:
//     // Private member variable to store width of the box
//     int width; 

//     // Private constructor that initializes width
//     Box(int _w) : width(_w) {}

// public:
//     // Getter function to access width (const ensures this method doesn't modify the object)
//     int getWidth() const {
//         return width;
//     }

//     // Setter function to modify width
//     void setWidth(int _val) {
//         width = _val;
//     }

//     // Declaring boxFactory as a friend class so it can access Box's private members
//     friend class boxFactory;
// };

// // Define the boxFactory class, which is a friend of Box
// class boxFactory {
//     // Keeps track of the number of boxes created
//     int count; 

// public:
//     // Function to create a Box with a specified width
//     Box getABox(int _w) {
//         // Increment count when a Box is created
//         ++count;  
//         // Return a Box object by calling its private constructor        
//         return Box(_w);   
//     }
// };

// int main() {
//     // Create a boxFactory object
//     boxFactory bfact; 
//     // Use the factory to create a Box with width 5         
//     Box b = bfact.getABox(5);   

//     // Output the width of the box
//     cout <<"Width is: "<< b.getWidth() << endl;  
//     return 0;
// }







// NOTES:
// The key point here is that boxFactory can access private members
// of Box because it’s declared as a friend.

// (1). boxFactory Class:
// --> The boxFactory class is designed to create Box objects.
// --> It has a method called getABox(int _w) that takes a width value, 
// increases an internal count to keep track of the boxes created, 
// and then returns a new Box object with the specified width.
// --> Because boxFactory is a friend of Box, it can access Box's private constructor 
// to create Box objects directly, which isn't allowed outside of this class.

// (2). main Function:
// --> In main, an instance of boxFactory (named bfact) is created.
// --> bfact is used to create a Box object with a width of 5 by calling getABox(5).
// --> Finally, the program prints the width of this Box, which should display 5.

// In short, boxFactory is a helper class to create Box objects with specific widths, 
// and main demonstrates this process by creating a Box and printing its width.