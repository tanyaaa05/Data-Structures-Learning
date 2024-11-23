#include<iostream>
using namespace std;

int main() {

    int a=5;
    int* ptr = &a;

    // copy pointer
    int* otherPtr = ptr;

    cout<<"Value of ptr is: "<<*ptr <<endl;
    cout<<"Value of otherPtr is: "<<*otherPtr <<endl;
    
    return 0;
}