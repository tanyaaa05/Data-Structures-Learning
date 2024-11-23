#include<iostream>
using namespace std;

#define PI 3.14

float circleArea(float r) {
    return PI*r*r;
}

float circlePerimeter(float r) {
    return 2*PI*r;
}

int main() {
    cout<<circleArea(4.5)<<endl;
    cout<<circlePerimeter(4.5)<<endl;
    return 0;
}




// NOTES:
// In C++, a macro is a preprocessor directive that defines a constant 
// or a piece of code that can be reused throughout the program. 
// The #define directive is used to create macros, and it essentially 
// tells the compiler to replace all instances of the macro name with 
// its defined value before actual compilation.













// #include <iostream>   
// using namespace std;

// // Define a macro named MAXX that takes two arguments, x and y
// // It evaluates to the maximum of x and y by using a ternary conditional operator
// #define MAXX(x, y) ((x > y) ? x : y)

// // Function fun calculates the maximum of two integers x and y using the MAXX macro
// void fun() {
//     int x = 6;          // Declare and initialize x
//     int y = 14;         // Declare and initialize y
//     int z = MAXX(x, y); // Use the MAXX macro to get the maximum of x and y, and store it in z
//     cout << "Max of " << x << " and " << y << " is: " << z << endl;  // Output the result
// }

// // Function fun2 calculates the maximum of two integers a and b using the MAXX macro
// void fun2() {
//     int a = 10;         // Declare and initialize a
//     int b = 24;         // Declare and initialize b
//     int c = MAXX(a, b); // Use the MAXX macro to get the maximum of a and b, and store it in c
//     cout << "Max of " << a << " and " << b << " is: " << c << endl;  // Output the result
// }

// // Function fun3 calculates the maximum of two integers p and q using the MAXX macro
// void fun3() {
//     int p = 10;         // Declare and initialize p
//     int q = 5;          // Declare and initialize q
//     int r = MAXX(p, q); // Use the MAXX macro to get the maximum of p and q, and store it in r
//     cout << "Max of " << p << " and " << q << " is: " << r << endl;  // Output the result
// }

// int main() {
//     fun();   // Call function fun to find and display the maximum of x and y
//     fun2();  // Call function fun2 to find and display the maximum of a and b
//     fun3();  // Call function fun3 to find and display the maximum of p and q
//     return 0;
// }
