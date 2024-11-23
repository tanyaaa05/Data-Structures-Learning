#include<iostream>
using namespace std;

bool checkKey(string& str, int& n, int i, char& key) {
    // base case: if we have traversed the entire string
    if(i >= n) {
        return false; 
    }

    // 1 case solve 
    if(str[i]==key) return true;

    bool ans = checkKey(str,n,i+1,key);
    return ans;

}

int main() {
    string str = "tanya";
    int n = str.length();

    char key = 'a';

    int i=0;

    bool ans = checkKey(str,n,i,key);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}







