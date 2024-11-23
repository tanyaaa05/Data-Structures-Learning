#include<iostream>
using namespace std;

int main() {
    int row = 4;
    int col = 5;
    
    // Dynamic allocation of a 2D array
    int** arr = new int*[row];
    for(int i=0;i<row;i++) {
        arr[i] = new int[col];
    }

    cout<<"Taking the input array: "<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array: "<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing dynamically allocated memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
