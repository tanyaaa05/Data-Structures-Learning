#include<iostream>
using namespace std;

int main() {

    // int arr[10]={0};  --> initialise all the values with zero.
    // int arr[10]={1};  --> intialise the first value by one and rest will be zero.
    // int arr[10];      --> gives the garbage values.

    int arr[10] = {1,2,3,4,5};
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
