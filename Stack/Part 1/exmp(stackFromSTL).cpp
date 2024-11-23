#include<iostream>
#include<stack>
using namespace std;

int main() {

 // creation of stack
 stack<int> st;

 // insertion
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);

 // remove
 st.pop();
 st.pop();

 // check the top element in the stack
 st.top();
 cout<<"Now element on top is in the stack will be: "<<st.top()<<endl;
 cout<<endl;

 // size
 cout<<"size of stack is: "<<st.size()<<endl;
 cout<<endl;

 if(st.empty()) {
  cout<<"stack is empty!"<<endl;
 }
 else {
  cout<<"stack is not empty!"<<endl;
 }

 return 0;
}
