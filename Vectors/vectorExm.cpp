#include<iostream>
#include<vector>
using namespace std;
int main() {

    // first usecase type of vector
    vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;


    // insert
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(12);

    // print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // remove or delete
    arr.pop_back();

    // print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    // vector<int> brr(10,-5);
    // second usecase type of vector
    vector<int> brr(n,-5);
    cout<<"Size of brr is: "<<brr.size()<<endl;
    cout<<"Capacity of brr is: "<<brr.capacity()<<endl;


    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing crr: "<<endl;
    // first usecase type of vector
    vector<int> crr{10,20,30,40,50};

     for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"Vector crr is empty or not: "<<crr.empty()<<endl;

    vector<int> drr;
    cout<<"Vector drr is empty or not: "<<drr.empty()<<endl;
    

    return 0;
}