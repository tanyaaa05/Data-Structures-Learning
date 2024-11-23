#include<iostream>
using namespace std;

int main() {

    int* a = new int(5); 
   // *a = 5;
    cout<<*a<<endl;

    int b = 10;
    a = &b;
    cout<<*a<<endl;
    
    return 0;
}














// #include<iostream>
// using namespace std;

// int main() {

//     const int *a = new int(20);     // CONST data, NON-CONST pointer.
//     // int const *a = new int(20);   --> same as above Line
//     cout<<*a<<endl;

//     // we can't change the content of the pointer
//     // *a=10;  
//     // cout<<*a<<endl;

//     int b=10;
//     a = &b;     // pointer itself can be re-assigned.
//     cout<<*a<<endl;

//     return 0;
// }