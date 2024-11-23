#include <iostream>
using namespace std;

int slowExponentiation(int a, int b) {
    int ans=1;

    while(b>0) {

        // (b % 2 != 0) --> Odd hone ki condition
        if(b & 1) {   
            // Odd
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}

int main() {
    int a, b;
    
    // Input the two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    cout << "Final ans is: "<< slowExponentiation(a, b) << endl;

    return 0;
    
}