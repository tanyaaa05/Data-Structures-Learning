// Triplet sum
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{10,20,30,40,50,60,70};
    int sum=80;

    // print all pairs 
    // outer loop will traverse for each element
    for (int i=0; i<arr.size(); i++) {
        int element1=arr[i];

        // first inner loop --> for every element, will traverse on aage wala elements
        for (int j=i+1; j<arr.size(); j++) {
            int element2=arr[j];

            // second inner loop --> for every element, will traverse on aage wala elements
            for (int k=i+2; k<arr.size(); k++){
                if(element1 + element2 + arr[k]  == sum) {
                    cout<<"("<<element1<<","<<element2<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
}