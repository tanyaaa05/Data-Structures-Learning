#include <iostream>
using namespace std;
int main() {
    int arr[]={0,1,0,0,0,1,1,1,1,1,0,0,0,1,1,9,8,7,2,4};

    int numZero=0;
    int numOne=0;

    int size=20;

    for(int i = 0; i < size ; i++){

        // if zero found, increment numZero
        if(arr[i]==0){
            numZero++;
        }

        // if one found, increment numOne
        if(arr[i]==1){
            numOne++;
        }
    }

    cout<<"Total number of zeroes are: "<<numZero<<endl;
    cout<<"Total number of ones are: "<<numOne<<endl;

    return 0;
}