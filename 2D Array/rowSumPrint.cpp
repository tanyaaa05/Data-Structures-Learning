#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][4], int rows, int cols) {     

    // row sum --> row-wise Traversal
    cout<<"Printing row-wise sum: "<<endl;
    for(int i = 0; i < rows; i++){
        int sum=0;
        for(int j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main() {
    // Declare 2D array
    int arr[3][4];

    int rows=3;
    int cols=4;


    // taking row-wise input
    cout<<"Taking row-wise input: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            cin>>arr[i][j];
        }
    }

    // row-wise print
    cout<<"Printing row-wise: "<<endl;
    // outer loop 
    for(int i = 0; i < rows; i++){

        // for every row, we need to print the value in each column
        for(int j = 0; j < cols; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowWiseSum(arr, rows, cols);

    return 0;
}
    