#include<iostream>
using namespace std;

void solve(int arr[]) {

    cout<<"Size inside solve function: "<<sizeof(arr)<<endl;

    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;

    arr[0]=50;
}
int main() {

    int arr[10] = {1,2,3,4,5};
    cout<<"Size inside main function: "<<sizeof(arr)<<endl;

    cout<<"arr: "<<arr<<endl;
    cout<<"arr: "<<&arr<<endl;

    // Printing array inside the main function
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"Now calling solve function."<<endl;
    solve(arr);

    cout<<"Back to main function: "<<endl;
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}