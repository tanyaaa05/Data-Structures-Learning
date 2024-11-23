#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int key) {
    // base case
    // case 1 --> key not found
    // (s > e) --> Invalid array
    if(s>e) {
        return -1;
    }

    int mid = (s+e)/2;
    // case 2 --> key found
    if(arr[mid]==key) return mid;

    // arr[mid] > key --> Left search
    if(arr[mid]>key) {
        return binarySearch(arr,s,mid-1,key);
    }

    // arr[mid] < key --> right search
    if(arr[mid]<key) {
        return binarySearch(arr,mid+1,e,key);
    }
    return -1;
}

int main() {
    vector<int> v{10,20,30,50,60,70};
    int n = v.size();
    int key=50;

    int s=0;
    int e=n-1;

    int ans = binarySearch(v,s,e,key);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}