#include<iostream>
using namespace std;
int main() {
    
    // Declare 2D array
    int arr[3][4];

    // Initialisation of 2D Array
    int brr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // cout<<brr[1][2]<<endl;

    int rows=3;
    int cols=3;

    // row-wise print
    cout<<"Printing row-wise: "<<endl;
    // outer loop 
    for(int i = 0; i < rows; i++){

        // for every row, we need to print the value in each column
        for(int j = 0; j < cols; j++) {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    // column-wise print
    cout<<"Printing column-wise: "<<endl;
    for(int i = 0; i < rows; i++){

        // for every row, we need to print the value in each column
        for(int j = 0; j < cols; j++) {
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}