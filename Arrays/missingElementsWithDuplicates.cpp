#include<iostream>
#include<vector>
#include<math.h> // For abs function
using namespace std;

void findMissing(int arr[], int n) {

    // // Method(1). visited method --> a[i] belongs to [1,N]
    // for(int i = 0; i < n; i++) {
    //     int index=abs(arr[i]);   // Get the absolute value of the current element

    //     // agar element visited nahi hai toh use visit karke -ve mark kardo
    //     // If the value at the corresponding index is positive, mark it as visited (make it negative)
    //     if(arr[index-1]>0) {
    //         arr[index-1]=((arr[index-1])*-1);
    //     }
    // }

    // // Now, all the positive numbers indicate the missing indices
    // for(int i = 0; i < n; i++) {
    //     // If the value is still positive, that means the index + 1 is missing
    //     if(arr[i]>0) {
    //         cout<<i+1<<" ";
    //     }
    // }



    // Method(2). Sorting + Swapping Method
    int i=0;
    while(i<n) {
        int index=arr[i]-1;
        
        // Mismatch
        if(arr[i] != arr[index]) {
            swap(arr[i],arr[index]);
        }
        else {
            i++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i]!=i+1) {
            cout<<i+1<<" ";
        }
    }
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 3};  // Example array
    int n = sizeof(arr)/sizeof(arr[0]);  // Size of the array

    cout<<"Missing Elements are: ";
    findMissing(arr, n);  // Find and print the missing numbers
    
    return 0;
}