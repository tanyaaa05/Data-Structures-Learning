#include<iostream>
using namespace std;

void solve(int* val) {
    *val = *val + 1;
}

int main() {
    
    int a=5;
    solve(&a);

    cout<<a<<endl;

    return 0;
}