#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int target) {

 // base case
 if(st.empty()) {
  st.push(target);
  return;
 }

 // step(01):
 int topElement = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call
 insertAtBottom(st, target);

 // step(04): backtracking
 st.push(topElement);

}

void reverseStack(stack<int> &st) {

 // base case
 if(st.empty()) {
  return;
 }

 // step(01):
 int target = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call on reverse stack
 reverseStack(st);

 // step(04): insert at bottom target ko
 insertAtBottom(st, target);

}


int main() {

 stack<int> st;

 st.push(5);
 st.push(15);
 st.push(27);
 st.push(32);
 st.push(11);

 reverseStack(st);

 cout<<"Printing after reverse: "<<endl;
 while(!st.empty()) {
  cout<<st.top()<<" ";
  st.pop();
 }
 cout<<endl;

 return 0;

}













