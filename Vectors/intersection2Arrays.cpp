#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,5};

    vector<int> ans;

    // outer loop on arr vector 
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        
        // for every element, run loop on brr
        for(int j=0;j<brr.size();j++) {
            if(element==brr[j]){
                // mark kardo
                brr[j] = -1;  // --> we can also use INT_MIN or break at the place of -1
                ans.push_back(element);
            }
        }
    }

    // print ans
    cout << "Printing ans array: ";
    for (int i=0; i<ans.size(); i++) {
            cout << ans[i] << " ";
    }
    cout<<endl;

}