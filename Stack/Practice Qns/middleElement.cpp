#include<iostream>
#include<stack>
using namespace std;

void printMiddleElement(stack<int> &st, int &totalSize) {

 // when stack is empty
 if(st.size() == 0) {
  cout<<"There is no element in Stack"<<endl;
  return;
 }

 // base case
 if(st.size() == (totalSize/2 + 1)){
  cout<<"Middle element in Stack is: "<<st.top()<<endl;
  return;
 }

 // step(01):
 int temp = st.top();

 // step(02):
 st.pop();

 // step(03): recursive call
 printMiddleElement(st,totalSize);

 // step(04): backtrack
 st.push(temp);

}

int main() {

 // CREATION
 stack<int> st;

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);
 st.push(70);

 int totalSize = st.size();
 printMiddleElement(st, totalSize);

 return 0;
}
