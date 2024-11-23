#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmaller(vector<int> &input) {

  // Stack to find the next smaller element
 stack<int> st;

 // WHY -1 ? --> By Default -1 is pushed to represent
 // "no smaller element" for the rightmost value
 st.push(-1);


 // ans vector to store the next smaller elements
 vector<int> ans(input.size());

 // Time complexity: O(n) for this loop(Right -> Left)
 for(int i=input.size()-1;i>=0;i--) {
  int curr = input[i];

  // (answer stack mein hai) The while loop pops elements at most
  // once for each element in input
  while(st.top()>=curr) {
   st.pop();
  }

  // smaller element mil gaya hai --> Store the top of the stack
  // (next smaller element) in the result array
  ans[i] = st.top();

  // Push the current element into the stack
  st.push(curr);
 }
 return ans;
}

int main() {

 vector<int> input;
 input.push_back(2);
 input.push_back(1);
 input.push_back(4);
 input.push_back(3);

 // Call the nextSmaller function and store the result
 vector<int> result = nextSmaller(input);

 // Print the result
 cout << "Next Smaller Elements: ";
 for (int i=0; i<result.size(); i++) {
  cout << result[i] << " ";
 }
 cout << endl;

 return 0;
}
