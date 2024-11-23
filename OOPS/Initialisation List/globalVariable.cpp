#include<iostream>
using namespace std;

// GLOBAL VARIABLE
int x=10;

void fun() {
    int x=60;
    cout<<x<<endl;
    ::x=40;
    cout<<::x<<endl;
}

int main() {

    // global x
    ::x=5;
    
    // local to main() fn.
    int x=20;
    cout<<x<<endl;

    // accessing Global with ::
    cout<<::x<<endl;

    {
        int x=54;
        cout<<x<<endl;
        cout<<::x<<endl;
    }

    fun();
    return 0;
}