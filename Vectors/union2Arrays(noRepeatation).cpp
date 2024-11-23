// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int main() {
//     // int arr[]={1,3,5,7,9};
//     // int sizea=5;
//     // int brr[]={2,4,6,8};
//     // int sizeb=4;

//     vector<int> arr{1,3,5,7,9};
//     vector<int> brr{2,4,6,8,7,10};

//     vector<int> ans;

//     // push all elements oa vector arr
//     for(int i=0;i<arr.size();i++){
//         ans.push_back(arr[i]);
//     }

//     // push all elements oa vector brr
//     for(int i=0;i<brr.size();i++){
//         ans.push_back(brr[i]);
//     }

//     // print ans
//     cout<<"Printing ans array: ";
//     for(int i=0;i<ans.size();i++){

//         // INT_MIN might be used here as a sentinel value, i.e., to mark an invalid or unused entry in the arr.
//         if( arr[i]!=INT_MIN ){
//         cout<<ans[i]<<" ";
//         }
//     }
    
// }





#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
using namespace std;

int main() {
    vector<int> arr{1, 3, 5, 7, 9};
    vector<int> brr{2, 4, 6, 8, 7, 10};

    vector<int> ans;
    set<int> uniqueElements; // To store unique elements

    // Push all elements of vector arr
    for (int i=0; i<arr.size(); i++) {
        ans.push_back(arr[i]);
        uniqueElements.insert(arr[i]); // Insert into set to track uniqueness
    }

    // Push all elements of vector brr
    for (int i=0; i<brr.size(); i++) {
        if (uniqueElements.count(brr[i]) == 0) { // Check if element is already in set
            ans.push_back(brr[i]);
            uniqueElements.insert(brr[i]); // Insert unique element into set
        }
    }

    // Print ans
    cout << "Printing ans array: ";
    for (int i=0; i<ans.size(); i++) {
        if (arr[i] != INT_MIN) {
            cout << ans[i] << " ";
        }
    }
}