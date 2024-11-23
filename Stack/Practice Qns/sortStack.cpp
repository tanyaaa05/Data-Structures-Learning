#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st, int target) {

 if(st.empty()) {
  // when Stack is empty
  st.push(target);
  return;
 }

 // base case
 if(st.top() >= target) {
  st.push(target);
  return;
 }

 // step(01):
 int temp = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call
 insertSorted(st, target);

 // backtrack
 st.push(temp);

}

void sortStack(stack<int> &st) {

 // base case
 if(st.empty()) {
  // when Stack is empty
  return;
 }

 // step(01):
 int temp = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call
 sortStack(st);

 // backtrack
 insertSorted(st, temp);

}

int main() {
 stack<int> st;

 st.push(9);
 st.push(5);
 st.push(11);
 st.push(7);
 st.push(3);

 sortStack(st);

 cout<<"PRINTING: "<<endl;
 while(!st.empty()) {
  cout<<st.top()<<" ";
  st.pop();
 }
 cout<<endl;

}
