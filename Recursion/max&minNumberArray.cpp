#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) {
    // base case: if we have traversed the entire array
    if(i >= n) {
        return;
    }

    // check the current element and update the max
    if(arr[i] > maxi) {
        maxi = arr[i];
    }

    // Recursively call for the next element
    findMax(arr, n, i + 1, maxi);
}

void findMin(int arr[], int n, int i, int& mini) {
    // base case: if we have traversed the entire array
    if(i >= n) {
        return;
    }

    // check the current element and update the max
    if(arr[i] < mini) {
        mini = arr[i];
    }

    // Recursively call for the next element
    findMin(arr, n, i + 1, mini);
}

int main() {
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[10];  // array size is limited to 10
    cout << "Take the input array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = INT_MIN;  // Initialize maxi with the minimum possible integer
    int mini = INT_MAX;  // Initialize mini with the maximum possible integer
    

    // Start from index 0 to find the max element
    findMax(arr, n, 0, maxi);
    findMin(arr, n, 0, mini);

    // Output the maximum element after the recursive function finishes
    cout << "Maximum number in the array is: " << maxi << endl;

    // Output the minimum element after the recursive function finishes
    cout << "Minimum number in the array is: " << mini << endl;


    return 0;
}
