#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<vector<int>> arr(4, vector<int>(5));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];  // Fill each element with user input
        }
    }

    
    cout<<"Printing the array: "<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}





// Creates a 1D vector of size 5 with all elements initialized to 10
// vector<int> vec(5, 10);  

// 4x5 2D vector, all elements set to 10
// vector<vector<int>> arr(rows, vector<int>(cols, 10));  