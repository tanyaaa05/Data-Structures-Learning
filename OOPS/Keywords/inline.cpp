#include<iostream>
using namespace std;

inline void numberShow(int num) {
    cout<<num<<endl;
    cout<<num*2<<endl;
    cout<<num*3<<endl;
}

int main() {
    numberShow(10);
    numberShow(20);
    numberShow(30);
    numberShow(40);
    numberShow(50);

    return 0;
}