#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i) {
    
    // base case
    if(i >= n) return;

    // Print the current element
    cout << arr[i] << " ";

    // Recursively call for the next element
    printArray(arr, n, i + 1);
}

int main() {
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[10];
    cout << "Take the input array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Printing the array: ";
    
    // Start from index 0 when printing
    printArray(arr, n, 0);

    return 0;
}
