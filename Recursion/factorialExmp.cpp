#include<iostream>
using namespace std;

int factorial(int n) {

    // Base case
    if(n==1 || n==0) return 1;

    int smallProblem = factorial(n-1);
    int bigProblem = n * smallProblem;

    return bigProblem;

}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = factorial(n);

    cout<<"The factorial of n is: "<<ans<<endl;
    
    return 0;
}