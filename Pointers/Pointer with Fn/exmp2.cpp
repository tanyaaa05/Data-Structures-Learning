#include<iostream>
using namespace std;

void update(int *p) {
    cout<<"Address stored inside p is: "<<p<<endl;
    cout<<"Address of p is: "<<&p<<endl;
    *p = *p + 10;
}

int main() {

    int a=5;
    cout<<"Address of a is: "<<&a<<endl;
    int* ptr = &a;
    cout<<"Address stored in ptr is: "<<ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    update(ptr);
    cout<<"Value of a is: "<<a<<endl;
}




// #include<iostream>
// using namespace std;

// void update(int* a, int* b) {
//     *a = 100;
//     *b = 200;
// }

// int main() {

//     int arr[5]={10,20,30,40,50};
//     int* p = &arr[1];
//     int* q = &arr[2];

//     update(p,q);

//     // Print the entire array
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<endl;

//     return 0;
// }