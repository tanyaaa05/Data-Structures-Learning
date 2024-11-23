#include<iostream>
#include<vector>
using namespace std;

int main() {
    // int arr[]={1,3,5,7,9};
    // int sizea=5;
    // int brr[]={2,4,6,8};
    // int sizeb=4;

    vector<int> arr{1,3,5,7,9};
    vector<int> brr{2,4,6,8,7,10};

    vector<int> ans;

    // push all elements of vector arr
    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }

    // push all elements of vector brr
    for(int i=0;i<brr.size();i++){
        ans.push_back(brr[i]);
    }

    // print ans
    cout<<"Printing ans array: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}