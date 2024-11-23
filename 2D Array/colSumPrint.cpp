#include<iostream>
using namespace std;

void printColWiseSum(int arr[][3], int rows, int cols) {     

    // row sum --> row-wise Traversal
    cout<<"Printing col-wise sum: "<<endl;
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
    int arr[3][3];

    int rows=3;
    int cols=3;


    // taking col-wise input
    cout<<"Taking col-wise input: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            cin>>arr[i][j];
        }
    }

    // col-wise print
    cout<<"Printing col-wise: "<<endl;
    // outer loop 
    for(int i = 0; i < rows; i++){

        // for every row, we need to print the value in each column
        for(int j = 0; j < cols; j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    printColWiseSum(arr, rows, cols);

    return 0;
}
    