#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int rows, int cols, int key) {     

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            if(arr[i][j]==key) {
                return true;
            }
        }
    }

    // value is not present 
    return false;
}

int main() {
    // Declare 2D array
    int arr[3][4];

    int rows=3;
    int cols=4;
    
    int key=12;

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


    cout<<"Final ans is: "<<linearSearch(arr,rows,cols,key)<<endl;

    if(linearSearch(arr,rows,cols,key)==true) {
        cout<<"Key is found";
    }
    else {
        cout<<"Key is not found";
    }


    return 0;
}
    