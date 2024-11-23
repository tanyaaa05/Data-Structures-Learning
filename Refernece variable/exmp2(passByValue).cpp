#include<iostream>
using namespace std;

// Pass by value
void solve(int* p) {
    p = p + 1;
}

int main() {
    
    int a=5;
    int* p = &a;

    cout<<"Before: "<<p<<endl;
    solve(p);

    cout<<"After: "<<p<<endl;

    return 0;
}





// #include<iostream>
// using namespace std;

// // pass by reference
// void solve(int*& p) {
//     p = p + 1;
// }

// int main() {
    
//     int a=5;
//     int* ptr = &a;

//     cout<<"Before: "<<ptr<<endl;
//     solve(ptr);

//     cout<<"After: "<<ptr<<endl;

//     return 0;
// }