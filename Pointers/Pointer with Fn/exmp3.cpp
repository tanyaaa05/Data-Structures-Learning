#include<iostream>
using namespace std;

void util(int* ptr){

    // ptr = ptr + 1;

    *ptr = *ptr + 1;

}

int main() {

    int a=5;
    int* p = &a;

    cout<<"Before: "<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    util(p);

    cout<<"After: "<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
}