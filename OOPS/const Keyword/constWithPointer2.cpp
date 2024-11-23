// #include<iostream>
// using namespace std;

// int main() {

//     // CONST pointer, but NON-CONST data.
//     int* const a = new int(20); 
//     cout<<*a<<endl; 
//     *a = 10;  // it will work
//     cout<<*a<<endl; 

//     // int b=50;
//     // a = &b;  // it will not work, CONST pointer.


//     return 0;
// }












#include<iostream>
using namespace std;

int main() {

    // CONST pointer, CONST data.
    const int *const a = new int(20); 
    cout<<*a<<endl; 
    
    // *a = 10;  // it will not work
    // cout<<*a<<endl; 

    // int b=50;
    // a = &b;  // it will not work, CONST pointer.


    return 0;
}