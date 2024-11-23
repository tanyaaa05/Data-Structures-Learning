#include<iostream>
using namespace std;

void solve(int** ptr){

    // // case-I
    // ptr = ptr + 1;

    // // case-II
    // *ptr = *ptr + 1;

    // case-III
    **ptr = **ptr + 1;

}

int main() {

    int a=5;
    int* p = &a;

    int** q = &p;
    solve(q);

    cout<<a<<endl;

    return 0;
}