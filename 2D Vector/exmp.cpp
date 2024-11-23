#include<iostream>
#include<vector>
using namespace std;

int main() {

    int row=4;
    int col=5;

    // Intialisation of 2D vector
    vector<vector<int>> arr(row, vector<int>(col,5));

    // vector<vector<int>> arr(5, vector<int>(6,5));

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}