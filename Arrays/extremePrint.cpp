#include<iostream>
using namespace std;
int main() {
    
    int arr[100]={2,5,97,3,9,8,5,89,63};
    int size=9;

    int start=0;
    int end=size-1;

    while(start<=end) {

        if(start==end) {
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }

}