#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;

vector<int> nextSmaller(vector<int> &input) {

 stack<int> st;
 st.push(-1);

 vector<int> ans(input.size());

 for(int i=input.size()-1;i>=0;i--) {
  int curr = input[i];

  while(st.top() != -1 && input[st.top()]>=curr) {
   st.pop();
  }

  ans[i] = st.top();

  st.push(i);
 }
 return ans;
}

vector<int> prevSmaller(vector<int> &input) {

 stack<int> st;
 st.push(-1);

 vector<int> ans(input.size());

 for(int i=0;i<input.size();i++) {
  int curr = input[i];

  while(st.top() != -1 && input[st.top()]>=curr) {
   st.pop();
  }

  ans[i] = st.top();

  st.push(i);
 }
 return ans;
}

int largestRectangularArea(vector<int> &heights) {

 // step(01): prevSmaller call
 vector<int> prev = prevSmaller(heights);

 // step(02): nextSmaller call
 vector<int> next = nextSmaller(heights);

 int maxArea = INT_MIN;
 int size = heights.size();

 for(int i=0;i<heights.size();i++) {
  int length = heights[i];

  if(next[i] == -1) {
   next[i] = size;
  }

  int width = next[i]-prev[i]-1;

  int area = length*width;

  maxArea = max(area,maxArea);
 }
return maxArea;

}

int main() {

 vector<int> v;

 v.push_back(2);
 v.push_back(4);
 v.push_back(5);
 v.push_back(6);
 v.push_back(2);
 v.push_back(3);

 int maxArea = largestRectangularArea(v);

 cout<<"Maximum area of Rectangular histogram is: "<<maxArea<<endl;

 return 0;
}
