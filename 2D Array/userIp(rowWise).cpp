#include<iostream>
using namespace std;
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

    return 0;
}