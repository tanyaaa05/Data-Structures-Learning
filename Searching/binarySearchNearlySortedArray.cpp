#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    
    int s=0;
    int e=arr.size()-1;

    int mid= s + (e-s/2);

    while(s<=e) {

        if(arr[mid]==target) {

            // element found, then return index
            return mid;
        }
        if(mid-1>=s && arr[mid-1]==target) {

            // element found, then return index
            return mid-1;
        }
        if( mid+1<e && arr[mid+1]==target ) {

            // element found, then return index
            return mid+1;
        }
        else if(target<arr[mid]) {
            // search in left
            e=mid-2;
        }
        else{
            // search in right
            s=mid+2;
        }
        mid= s + (e-s/2);
    }
    // element not found
    return -1;
}

int main() {
    vector<int> arr{10,3,40,20,50,80,70};
    int target=40;

    int ans=binarySearch(arr,target);
    cout<<"Index of "<<target<<" is: "<<ans;

    return 0;
}
