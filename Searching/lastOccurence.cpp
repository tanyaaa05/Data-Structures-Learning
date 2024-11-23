#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> arr, int target) {
    int s=0;
    int e=arr.size()-1;

    int mid= s + (e-s/2);
    int ans=-1;

    while(s<=e) {
        if(arr[mid]==target) {
            // ans store
            ans=mid;

            // Right search
            s=mid+1;
        }
        else if(target<arr[mid]) {
            // left search
            e=mid-1;
        }
        else if(target>arr[mid]) {
            // right search
            s=mid+1;
        }
        mid= s + (e-s/2);
    }

    return ans;

}

int main() {
    vector<int> arr{1,3,3,3,3,3,4,4,4,4,6,7,8};
    int target=3;
    int ans=lastOccurence(arr,target);

    cout<<"ans is at index: "<<ans<<endl;

    return 0;
}