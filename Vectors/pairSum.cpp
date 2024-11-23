// // define all the pairs

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> ans{10,20,30,40,50,60,70};
//     //int sum=80;

//     // print all pairs 
//     // outer loop will traverse for each element
//     for (int i=0; i<ans.size(); i++) {

//         cout<<"We are at element: "<<ans[i]<<endl;
//         int element=ans[i];

//         // for every element, will traverse on aage wala elements
//         for (int j=i+1; j<ans.size(); j++) {
//             cout<<"pair "<<element<<" with "<<ans[j]<<endl;
//         }
//     }
// }





// pair sum
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{10,20,30,40,50,60,70};
    int sum=100;

    // print all pairs 
    // outer loop will traverse for each element
    for (int i=0; i<arr.size(); i++) {

        int element=arr[i];

        // for every element, will traverse on aage wala elements
        for (int j=i+1; j<arr.size(); j++) {
            if(element + arr[j] == sum) {
                cout<<"Pair found: "<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}