#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    
    int start=0;
    int end=size-1;

    int mid= start + (end-start/2);

    while(start<=end) {
        int element=arr[mid];

        if(element==target) {

            // element found, then return index
            return mid;
        }
        else if(target<element) {
            // search in left
            end=mid-1;
        }
        else{
            // search in right
            start=mid+1;
        }
        mid= start + (end-start/2);
    }
    // element not found
    return -1;
}

int main() {
    int arr[] = {2,4,5,7,8,9};
    int size=6;
    int target=9;

    int indexOftarget = binarySearch(arr,size,target);

    if(indexOftarget == -1) {
        cout<<"Target not Found"<<endl;
    }

    else{
        cout<<"Target Found at: "<<indexOftarget<<" Index"<<endl;
    }

}