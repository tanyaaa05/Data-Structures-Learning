#include<iostream>
#include<string.h>
using namespace std;

int main() {
    string str;
    cout<<"Take input string: ";
    // cin>>str;
    getline(cin,str);

    cout<<"Length of the string is: "<<str.length()<<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<"Printing string: "<<str<<endl;

    string a = "Tanya";
    string b = "Tanya";

    if(a.compare(b)==0) {
        cout<<"a and b are exactly the same strings"<<endl;
    }
    else {
        cout<<"a and b are not same"<<endl;
    }

    string x = "abba";
    string y = "baba";
    cout<<x.compare(y)<<endl;

    string sentence = "Hello ji how are you all";
    string target = "ji";
    cout<<"Target is found at index: "<<sentence.find(target)<<endl;

    // // target not found condition
    // if(sentence.find(target)==string::npos){
    //     cout<<"Not found"<<endl;
    // }

    return 0;
}