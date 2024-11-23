#include<iostream>
using namespace std;

// Recursive function to calculate n^a
int power(int n, int a) {
    // Base case: any number raised to the power of 0 is 1
    if(a == 0) return 1;

    // Recursive case: multiply n with the result of n raised to (a-1)
    int ans = n * power(n, a - 1);
    return ans;
}

int main() {
    int n, a;
    cout << "Enter the value of n and a: ";
    cin >> n >> a;

    // Call the recursive power function
    int ans = power(n, a);

    // Output the result
    cout << "The value of " << n << " raised to the power " << a << " is: " << ans << endl;
    
    return 0;
}
