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
 int temp = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call
 insertAtBottom(st, target);

 // step(04): backtracking
 st.push(temp);

}

int main() {

 stack<int> st;

 st.push(5);
 st.push(15);
 st.push(27);
 st.push(32);
 st.push(11);

 // when stack is empty
 if(st.empty()) {
  cout<<"Stack is empty, so we can't insert the element at bottom"<<endl;
  return 0;
 }

 // when stack is non-empty
 int target = st.top();
 st.pop();
 insertAtBottom(st, target);

 cout<<"Printing: "<<endl;
 while(!st.empty()) {
  cout<<st.top()<<" ";
  st.pop();
 }

 return 0;

}














// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int> &st, int target) {

//  // base case
//  if(st.empty()) {
//   st.push(target);
//   return;
//  }

//  // step(01):
//  int topElement = st.top();

//  // step(02):
//  st.pop();

//  // step(03): recursive call
//  solve(st, target);

//  // step(04): backtracking
//  st.push(topElement);

// }

// void insertAtBottom(stack<int> &st) {

//  // when stack is empty
//  if(st.empty()) {
//   cout<<"Stack is empty, so we can't insert the element at bottom"<<endl;
//   return;
//  }

//  // when stack is non-empty
//  int target = st.top();
//  st.pop();
//  solve(st, target);

// }

// int main() {

//  stack<int> st;

//  st.push(5);
//  st.push(15);
//  st.push(27);
//  st.push(32);
//  st.push(11);

//  insertAtBottom(st);

//  cout<<"Printing: "<<endl;
//  while(!st.empty()) {
//   cout<<st.top()<<" ";
//   st.pop();
//  }

//  return 0;

// }
