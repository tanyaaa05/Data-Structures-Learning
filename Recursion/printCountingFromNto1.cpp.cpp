#include<iostream>
using namespace std;

void printCounting(int n) {

    // base case
    if(n==0) return;

    // processing
    cout<<n<<" ";

    // recursive relation
    printCounting(n-1);

}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Counting from n to 1 is: "<<endl;
    printCounting(n);

    return 0;
}