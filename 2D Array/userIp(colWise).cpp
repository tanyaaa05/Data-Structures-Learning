#include<iostream>
using namespace std;
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

    // column-wise print
    cout<<"Printing column-wise: "<<endl;
    for(int i = 0; i < rows; i++){

        // for every row, we need to print the value in each column
        for(int j = 0; j < cols; j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}