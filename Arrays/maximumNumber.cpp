#include<iostream>
#include<limits.h>
using namespace std;
int main() {

    // int arr[100]={-2,-5,-97,-3,-9,-8,-5,-89,-63,-34};
    int arr[100]={2,5,97,3,9,8,5,89,63,34};
    int size=10;
    
    // initialize the maxi variable with the minimum possible integer value
    int maxi=INT_MIN;

    for(int i = 0; i < size; i++){

        // if zero found, increment numZero
        if(arr[i]>maxi){

            // update the maxi value when found a value greater than maxi
            maxi=arr[i];
        }
    }
    
    cout<<" The maximum number is: "<<maxi<<endl;

    return 0;

}
