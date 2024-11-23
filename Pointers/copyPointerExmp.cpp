#include<iostream>
using namespace std;

int main() {

    int a=10;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout<<a<<endl;   //10
    cout<<&a<<endl;  //adress of a
    cout<<p<<endl;   //adress of a
    cout<<&p<<endl;  //adress of p
    cout<<*p<<endl;  //10
    cout<<q<<endl;   //adress of a
    cout<<&q<<endl;  //adress of q
    cout<<*q<<endl;  //10
    cout<<r<<endl;   //adress of a
    cout<<&r<<endl;  //adress of r
    cout<<*r<<endl;  //10
    cout<<(*p + *q + *r)<<endl;    //30
    cout<<(*p)*2 + (*r)*3 <<endl;  //50
    cout<<(*p)/2 - (*r)/2 <<endl;  //0


    return 0;
}