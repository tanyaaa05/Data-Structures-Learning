#include<iostream>
#include<stack>
using namespace std;

class Stack {

 public:
 int *arr;
 int top;
 int size;

 // constructor
 Stack(int size) {
  arr = new int[size];
  this->size = size;
  top = -1;
 }

 // functions
 void push(int data) {
  if(size-top>1) {
   // space available
   // insert
   top++;
   arr[top] = data;
  }
  else {
   // space not available
   cout<<"Stack Overflow!"<<endl;
  }
 }

 void pop() {
  if(top == -1) {
   cout<<"Stack underflow, can't delete element from the Stack bcs the Stack is empty"<<endl;
  }
  else {
   // stack is not empty
   top--;
  }
 }

 int getTop() {
  if(top == -1) {
   cout<<"Stack is empty, there is no element in the Stack"<<endl;
  }
  else {
   return arr[top];
  }
 }

 // return number of valid elements present in the Stack
 int getSize() {
  return top+1;
 }

 bool isEmpty() {
  if(top == -1) {
   return true;
  }
  else {
   return false;
  }
 }

};

int main() {

 // CREATION
 // Stack constructor expects a size argument thats why we pass size as an argument
 Stack st(5);

 // insertion
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 // st.push(60);

 cout<<"PRINTING: "<<endl;
 while(!st.isEmpty()) {
  cout<<st.getTop()<<" ";
  st.pop();
 }
 cout<<endl;

 cout<<"Size of stack: "<<st.getSize()<<endl;

 st.pop();

 return 0;
}
