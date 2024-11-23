#include<iostream>
using namespace std;

class Stack {

 // properties
 public:

 int* arr;  // Dynamic array to hold stack elements
 int size;
 int top1;
 int top2;

 // constructor
 Stack(int size) {

  // Dynamically allocate memory for the array
  arr = new int[size];
  this->size = size;
  top1 = -1;
  top2 = size;  
 }

 // Functions
 // Push an element into Stack 1
 void push1(int data) {
  if(top2-top1 == 1) {
   // No space available between the stacks
   cout<<"OVERFLOW in Stack 1"<<endl;
  }
  else {
   // space available
   // Here Stack 1 grows from left to right so move top1 to the right
   top1++;
   arr[top1] = data;
  }
 }

 // Pop an element from Stack 1
 void pop1() {
  if(top1 == -1) {
   // stack 1 is empty
   cout<<"UNDERFLOW in Stack 1"<<endl;
  }
  else {
   // stack 1 is not empty

   // Optional: Clear the value
   arr[top1] = 0;

   // Here Stack 1 grows from left to right so Move top1 to the left
   top1--;
  }
 }

 // Push an element into Stack 2
 void push2(int data) {
  if(top2-top1 == 1) {
   // No space available between the stacks
   cout<<"OVERFLOW in Stack 2"<<endl;
  }
  else {
   // space available
   // Here Stack 2 grows from right to left so Move top2 to the left
   top2--;
   arr[top2] = data;
  }
 }

 // Pop an element from Stack 2
 void pop2() {
  if(top1 == size) {
   // stack 2 is empty
   cout<<"UNDERFLOW in Stack 2"<<endl;
  }
  else {
   // stack 2 is not empty

   arr[top2] = 0;

   // Here Stack 2 grows from right to left so Move top2 to the right
   top2++;
  }
 }

 // Check if Stack 1 is empty
 bool isEmpty1() {
  return top1 == -1;
 }

 // Check if Stack 2 is empty
 bool isEmpty2() {
  return top2 == size;
 }

 // Get the top element of Stack 1
 int getTop1() {
  if (isEmpty1()) {
   cout << "Stack 1 is empty!" << endl;
   return -1; // Return -1 as an error value
  }
  else {
   return arr[top1];
  }
 }

 // Get the top element of Stack 2
 int getTop2() {
  if (isEmpty2()) {
   cout << "Stack 2 is empty!" << endl;
   return -1; // Return -1 as an error value
  }
  else {
   return arr[top2];
  }
 }

};

int main() {

 // Create a stack object with size 10
 Stack st(10);

 // Testing Stack 1
 cout<<"Pushing into Stack 1:" << endl;
 st.push1(10);
 st.push1(20);
 st.push1(30);
 st.push1(40);
 st.push1(50);

 // while(!st.isEmpty1()) {
 //  cout<<st.getTop1()<<" ";
 //  st.pop1();
 // }
 // cout<<endl;

 cout<<"Top of Stack 1: "<<st.getTop1()<< endl;

 st.pop1();
 cout << "Top of Stack 1 after pop: "<<st.getTop1()<< endl;
 cout<<endl;

 // Testing Stack 2
 cout <<"Pushing into Stack 2:" << endl;
 st.push2(100);
 st.push2(200);
 st.push2(300);
 st.push2(400);
 st.push2(500);

 // while(!st.isEmpty2()) {
 //  cout<<st.getTop2()<<" ";
 //  st.pop2();
 // }
 // cout<<endl;

 cout <<"Top of Stack 2: "<<st.getTop2()<< endl;

 st.pop2();
 cout <<"Top of Stack 2 after pop: "<<st.getTop2()<< endl;

 return 0;
}
