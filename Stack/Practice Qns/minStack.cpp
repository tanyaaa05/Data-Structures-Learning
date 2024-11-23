#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack {

 // Vector to store pairs where:
 // - First element is the stack value
 // - Second element is the minimum value at this point in the stack
 vector<pair<int, int>> st;

 public:
  // Constructor to initialize the MinStack
  MinStack() {}

  // Functions
  void push(int val) {

   if(st.empty()) {
    // If the stack is empty, initialize the pair with the value
    // Both the value and the minimum will be the same
    pair<int, int> p;
    p.first = val;
    p.second = val;
    st.push_back(p);
   }
   else {
    // If the stack is not empty
    pair<int, int> p;
    p.first = val;

    // Minimum is the smaller of the current value and the previous minimum
    p.second = min(val, st.back().second);
    st.push_back(p);
   }

  }

  void pop() {
   // Remove the last pair from the vector
   st.pop_back();
  }

  int top() {
   return st.back().first;
  }

  int getMin() {
   return st.back().second;
  }

};


int main() {

 MinStack minStack;

 // Push values
 minStack.push(5);
 minStack.push(2);
 minStack.push(8);
 minStack.push(1);

 // Get the minimum value
 cout << "Minimum: " << minStack.getMin() << endl;

 // Get the top value
 cout << "Top: " << minStack.top() << endl;

 // Pop the top value
 minStack.pop();

 // Get the minimum value after popping
 cout << "Minimum after pop: " << minStack.getMin() << endl;

 return 0;

}
