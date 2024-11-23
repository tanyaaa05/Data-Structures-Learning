// #include<iostream>
// #include<vector>
// using namespace std;

// void wavePrintMatrix(vector<vector<int>> arr) {

//     // number of rows
//     int m=arr.size();

//     // // number of columns --> when number of cols are different for each and every row
//     // int n=arr[i].size();

//     // number of columns --> when number of cols are same for each and every row
//     int n=arr[0].size();

//     for(int col = 0; col < n; col++) {

//         // Even number of col --> Top to Bottom
//         if((col & 1) == 0) {
//             for(int i = 0; i < m; i++){
//                 cout<<arr[i][col]<<" ";
//             }
//         }
//         else {

//         // Odd number of col --> Bottom to Top
//             for(int i = m-1; i >= 0; i--){
//                 cout<<arr[i][col]<<" ";
//             }
//         }
//     }
// }

// int main() {

//     // Declare 2D vector
//     vector<vector<int>> arr{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//         {17,18,19,20}
//     };

//     wavePrintMatrix(arr);

//     return 0;
// }





#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> arr) {

    // number of rows
    int m=arr.size();

    // // number of columns --> when number of cols are different for each and every row
    // int n=arr[i].size();

    // number of columns --> when number of cols are same for each and every row
    int n=arr[0].size();

    int startingRow=0;
    int endingRow=m-1;

    for(int startingCol = 0; startingCol < n; startingCol++) {

        // Even number of col --> Top to Bottom
        if((startingCol & 1) == 0) {
            for(int i = startingRow; i <= endingRow; i++){
                cout<<arr[i][startingCol]<<" ";
            }
        }
        else {

        // Odd number of col --> Bottom to Top
            for(int i = endingRow; i >= startingRow; i--){
                cout<<arr[i][startingCol]<<" ";
            }
        }
    }
}

int main() {

    // Declare 2D vector
    vector<vector<int>> arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    wavePrintMatrix(arr);

    return 0;
}