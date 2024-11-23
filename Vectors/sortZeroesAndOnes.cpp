// #include<iostream>
// #include<vector>
// using namespace std;

// void printArray(vector<int> arr) {
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     vector<int> arr{0,1,0,1,1,0,1,0,1,1};
//     int start=0;
//     int end=arr.size()-1;
//     int i=0;

//     while(i!=end) {

//         cout<<"for i="<<i<<" start="<<start<<" end="<<end<<endl;

//         if(arr[i]==0){
//             cout<<"Found zero"<<endl;
//             cout<<"Before swap ";
//             printArray(arr);

//             swap(arr[start],arr[i]);
//             cout<<"After swap ";
//             printArray(arr);
//             start++;
//             i++;
//             cout<<"now i="<<i<<" start="<<start<<" end="<<end<<endl;
//         }

//         else{
//             cout<<"Found one"<<endl;
//             cout<<"Before swap ";
//             printArray(arr);

//             swap(arr[end],arr[i]);
//             cout<<"After swap ";
//             printArray(arr);
//             end--;
//             cout<<"now i="<<i<<" start="<<start<<" end="<<end<<endl;
//         }
//         cout<<endl;
//     }
// }




#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(i<=end) {

        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }

        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

     // print ans
    cout << "Printing ans array: ";
    for (int i=0; i<arr.size(); i++) {
            cout << arr[i] << " ";
    }
    cout<<endl;
}