#include<iostream>
#include<string.h>
using namespace std;

int main() {
    string str = "She is a software developer Engineer in Google!";
    // string word = "Tanya";
    str.replace(0,3,"Tanya");
    cout<<str<<endl;
}