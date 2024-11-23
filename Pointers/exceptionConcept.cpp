#include<iostream>
using namespace std;

int main() {

    int a=5;
    // pointer create
    int* p = &a;
    cout<<sizeof(p)<<endl;

    char ch='a';
    char* c = &ch;
    cout<<sizeof(c)<<endl;

    double dtr=5.06;
    double* d = &dtr;
    
    cout<<sizeof(d)<<endl;

    return 0;
}