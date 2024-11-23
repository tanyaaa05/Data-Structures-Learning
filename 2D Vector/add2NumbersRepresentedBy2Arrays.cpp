#include<iostream>
#include<vector>
#include<algorithm>  // for reverse
using namespace std;

string calc_Sum(vector<int>& arr1, vector<int>& arr2, int n, int m) {

    n=arr1.size();
    m=arr2.size();

    // intialise carry  
    int carry=0;
    string ans;

    // Pointers for both arrays starting from the last index
    int i=n-1;
    int j=m-1;
    
    // Process both arrays and the carry
    while(i>=0 && j>=0) {
        int x=arr1[i]+arr2[j]+carry;
        int digit=x%10;
        ans.push_back(digit + '0');   // Add the digit to the result
        carry=x/10;                   // Calculate and update carry
        i--,j--;
    }
    
    // Add remaining digits from array 'arr1'
    while(i>=0) {
        int x=arr1[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit + '0');
        carry=x/10;
        i--;
    }

    // Add remaining digits from array 'arr2'
    while(j>=0) {
        int x=0+arr2[j]+carry;
        int digit=x%10;
        ans.push_back(digit + '0');
        carry=x/10;
        j--;
    }
         
    // Add any remaining carry
    if(carry) {
        ans.push_back(carry+'0');
    }


    // Handle leading zeros (but don't pop the last zero if the result is zero)   
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }

    // // Handle leading zeros (but don't pop the last zero if the result is zero)   
    // if (ans[0] == '0' && ans.size() > 1) {
    //     while (ans[0] == '0') {
    //         ans.erase(ans.begin());
    //     }
    // }
         
    // The digits are added in reverse order, so reverse the result
    reverse(ans.begin(),ans.end());
    return ans;

}

int main() {


    vector<int> arr1 = {9, 5, 4, 9};  // Example 1
    vector<int> arr2 = {8, 1, 4};     // Example 2

    int n=arr1.size();
    int m=arr2.size();


    string result = calc_Sum(arr1, arr2, n, m);
    cout << "Final Sum of two numbers represented by two Arrays: " << result << endl;  
    
    return 0;
}