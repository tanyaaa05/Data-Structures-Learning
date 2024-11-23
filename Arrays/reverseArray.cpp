#include<iostream>
using namespace std;
int main() {
    
   int arr[500];
   int n;
   cin>>n;

    // taking input in array
    cout<<"Enter the values in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0;
    int end=n-1;

    while(start<=end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}