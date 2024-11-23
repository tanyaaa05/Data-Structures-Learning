// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int dividend, int divisor) {
//     int s=0;
//     int e=dividend;
//     int ans=0;

//     int mid= s + (e-s/2);
    
//     while(s<=e) {

//         // Perfect soln
//         if(mid*divisor==dividend) {
//             return mid;
//         }

//         // Not perfect soln
//         else if(mid*divisor>dividend) {
//             // left search
//             e=mid-1;
//         }
//         else {
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
//     int dividend=45;
//     int divisor=7;

//     int ans=solve(dividend, divisor);
//     cout<<"Ans is: "<<ans<<endl;

//     return 0;
// }




// // In case of a negative number
// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(int dividend, int divisor) {
//     int s=0;
//     int e=abs(dividend);
//     int ans=0;

//     int mid= s + (e-s)/2;
    
//     while(s<=e) {

//         // Perfect soln
//         if( abs(mid*divisor)==abs(dividend) ) {
//             return mid;
//         }

//         // Not perfect soln
//         else if( abs(mid*divisor)>abs(dividend) ) {
//             // left search
//             e=mid-1;
//         }
//         else {
//             // ans store
//             ans=mid;
//             // right search
//             s=mid+1;
//         }
//         mid= s + (e-s)/2;
//     }
    
//     if( (divisor<0 && dividend<0) || (divisor>0 && dividend>0) ) {
//     return ans;
//     }
//     else{
//         return -ans;
//     }
// }


// int main() {
//     int dividend=-48;
//     int divisor=7;

//     int ans=solve(dividend, divisor);
//     cout<<"Ans is: "<<ans<<endl;

//     return 0;
// }




// Floating point mein answer
#include<iostream>
using namespace std;

int solve(int dividend, int divisor) {
    int s=0;
    int e=abs(dividend);
    int ans=0;

    int mid= s + (e-s)/2;
    
    while(s<=e) {

        // Perfect soln
        if( abs(mid*divisor)==abs(dividend) ) {
            return mid;
        }

        // Not perfect soln
        else if( abs(mid*divisor)>abs(dividend) ) {
            // left search
            e=mid-1;
        }
        else {
            // ans store
            ans=mid;
            // right search
            s=mid+1;
        }
        mid= s + (e-s)/2;
    }
    
    if( (divisor<0 && dividend<0) || (divisor>0 && dividend>0) ) {
    return ans;
    }
    else{
        return -ans;
    }
}


int main() {
    int dividend=-48;
    int divisor=7;

    int ans=solve(dividend, divisor);
    cout<<"Ans is: "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digits in precsion: ";
    cin>>precision;

    double step=0.1;
    double finalAns=ans;
     for(int i=0; i<precision; i++) {
        for(double j=finalAns; j*abs(divisor)<=abs(dividend); j=j+step) {
            finalAns=j;
        }
        step=step/10;
     }

    cout<<"Final answer is: "<<finalAns<<endl;

    return 0;
}
