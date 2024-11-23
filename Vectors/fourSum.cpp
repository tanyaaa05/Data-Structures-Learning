#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{10,20,30,40,50,60,70};
    int sum=100;

    // print all pairs 
    // outer loop will traverse for each element
    for (int i=0; i<arr.size(); i++) {
        int element1=arr[i];

        // first inner loop --> for every element, will traverse on aage wala elements
        for (int j=i+1; j<arr.size(); j++) {
            int element2=arr[j];

            // second inner loop --> for every element, will traverse on aage wala elements
            for (int k=i+2; k<arr.size(); k++){
                int element3=arr[k];

                // third inner loop --> for every element, will traverse on aage wala elements
                for (int p=i+3; p<arr.size(); p++){
                    if(element1 + element2 + element3 + arr[p]  == sum) {
                        cout<<"("<<element1<<","<<element2<<","<<element3<<","<<arr[p]<<")"<<endl;
                    }
                
                }
            }
        }
    }
}


// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     int har = 10;
//     cout<<"Hello!";

// }
