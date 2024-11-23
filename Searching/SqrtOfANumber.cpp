// #include<iostream>
// using namespace std;

// int findSqrt(int n) {
//     int s=0;
//     int e=n-1;

//     int mid= s + (e-s/2);
//     int ans=-1;
//     int target=n;


//     while(s<=e) {
//         if(mid*mid==target) {
//             return mid;
//         }
//         else if(mid*mid>target) {
//             // left search
//             e=mid-1;
//         }
//         else{
//             // ans store
//             ans=mid;
//             // right search
//             s=mid+1;
//         }
//         mid= s + (e-s/2);
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int ans=findSqrt(n);
//     cout<<"Ans is: "<<ans<<endl;

//     return 0;
// }




// Floating point mein answer
#include<iostream>
using namespace std;

int findSqrt(int n) {
    int s=0;
    int e=n-1;

    int mid= s + (e-s/2);
    int ans=-1;
    int target=n;


    while(s<=e) {
        if(mid*mid==target) {
            return mid;
        }
        else if(mid*mid>target) {
            // left search
            e=mid-1;
        }
        else{
            // ans store
            ans=mid;
            // right search
            s=mid+1;
        }
        mid= s + (e-s/2);
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int ans=findSqrt(n);
    cout<<"Ans is: "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digits in precsion: ";
    cin>>precision;

    double step=0.1;
    double finalAns=ans;
     for(int i=0; i<precision; i++) {
        for(double j=finalAns; j*j<=n; j=j+step) {
            finalAns=j;
        }
        step=step/10;
     }

    cout<<"Final answer is: "<<finalAns<<endl;

    return 0;
}