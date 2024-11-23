// #include<iostream>
// using namespace std;

// int main() {
    
//     int arr[10] = {5,4,7,2,8};

//     cout<<arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;

//     return 0;
// }





#include<iostream>
using namespace std;

int main() {
    
    int arr[10] = {57,40,73,28,85};

    cout<<*arr<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+3)<<endl;
    cout<<arr[3]<<endl;

    // int i=0;
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;
    // cout<<*(i+arr)<<endl;
    // cout<<*(arr+i)<<endl;


    // arr = arr+2;

    // int* p=arr;
    // p=p+2;
    // cout<<p<<endl;


    return 0;
}