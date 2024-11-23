#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr, int& n, int i) {
    // base case
    if(i==n-1) return true;

    // solve 1 case
    if(arr[i+1]<arr[i]) {
        return false;
    }

    //  Recursively call for the next element
    return checkSorted(arr,n,i+1);
}

int main() {
    vector<int> v{10,20,30,50,60};
    int n = v.size();

    int i=0;

    bool isSorted = checkSorted(v,n,i);

    if(isSorted==true) {
        cout<<"Array is Sorted"<<endl;
    }
    else {
        cout<<"Array is not Sorted"<<endl;
    }

    return 0;
}