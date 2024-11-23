#include <iostream>
using namespace std;

int slowExponentiation(int a, int b) {
    int ans=1;

    for (int i = 0; i<b; i++) {
        ans=ans*a;
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