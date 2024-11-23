#include<iostream>
#include<string>
using namespace std;

void  printSubsequences(string str, string output, int i) {
    // base case
    if(i>=str.length()) {
        cout<<output<<" ";
        return;
    }

    // exclude
    printSubsequences(str,output,i+1);

    // include
    // Below line is responsible for concatenation of output string ans ith character of str string
    // output.push_back(str[i]);
    printSubsequences(str,output + str[i],i+1);
}


int main() {
    string str="abc";
    string output="";

    int i=0;

    cout<<"Printing all Subsequences are: "; 
    printSubsequences(str,output,i);

    return  0;
}
















// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// void  printSubsequences(string str, string output, int i, vector<string>& v) {
//     // base case
//     if(i>=str.length()) {
//         // store
//         v.push_back(output);
//         return;
//     }

//     // exclude
//     printSubsequences(str,output,i+1,v);

//     // include
//     // Below line is responsible for concatenation of output string ans ith character of str string
//     printSubsequences(str,output + str[i],i+1,v);
// }


// int main() {
//     string str="abc";
//     string output="";

//     vector<string> v;

//     int i=0;

//     printSubsequences(str,output,i,v);
//     cout<<"Printing all Subsequences are: "; 
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout<<endl;

//     cout<<"Size of the vector is: "<<v.size()<<endl;
    

//     return  0;
// }