#include<iostream>
using namespace std;

int main() {
    int a=5;
    
    // pointer create
    int *ptr = &a;

    // access the value ptr is pointing to
    cout<<"Address of a is: "<< &a <<endl;
    cout<< "Value stored at ptr is: "<<ptr <<endl;
    cout<< "Value ptr is pointing to is: "<< *ptr <<endl;
    cout<<&ptr;

    return 0;
}