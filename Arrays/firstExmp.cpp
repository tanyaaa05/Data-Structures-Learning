// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<arr[2];
// }




#include<iostream>
using namespace std;
int main() {

    int arr[500];
    int n;
    cin>>n;

    // taking input in array
    cout<<"Enter the values in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // printing
    cout<<"Printing the values in array: ";
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<" ";   // take 10 elements input in array & print their doubles.
    }
    return 0;
    
}