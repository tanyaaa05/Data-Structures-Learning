#include<iostream>
#include<stack>
using namespace std;

int main() {

 string str = "tanya";

 stack<char> st;
 for(int i=0;i<str.length();i++) {
  st.push(str[i]);
 }

 cout<<"Printing the reverse string: "<<endl;
 while(!st.empty()) {
  cout<<st.top()<<" ";
  st.pop();
 }
 cout<<endl;

 return 0;
}
