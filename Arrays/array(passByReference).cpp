// In C++, passing an array by reference allows you to modify the original array inside 
// a function without creating a copy of the array. This is more efficient than passing by value, 
// especially for large arrays.
// You must specify the size of the array in the function parameter when passing by reference.


#include <iostream>
using namespace std;

// Function that modifies the array elements
void modifyArray(int arr[10]) {

    for(int i = 0; i < 5; i++) {
        arr[i] *= 2; // Double each element
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Pass the array by reference to the function
    modifyArray(arr);

    // Print the modified array elements
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
