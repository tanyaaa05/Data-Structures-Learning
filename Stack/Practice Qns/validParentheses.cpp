#include <iostream>
#include <stack>
using namespace std;

// Function to check if a given string has valid parentheses
bool isValid(string str) {

 stack<char> st;

 // Iterate through each character in the string
 for (int i = 0; i < str.length(); i++) {
  char ch = str[i];

  // Check if the character is an opening bracket
  if (ch == '(' || ch == '{' || ch == '[') {
   // Push the opening bracket onto the stack
   st.push(ch);
  }

  else {
    // Handle the case for closing brackets

    if(st.empty()) {
     // If stack is empty, no opening bracket to match
     return false;
    }

    // when Stack is non-empty
    else {
      // Get the top element of the stack
      char topCh = st.top();

      // Check for matching pairs of brackets
      if((ch == ')' && topCh == '(')) {
       // If matching, pop the top element from the stack
       st.pop();
      }
      else if((ch == '}' && topCh == '{')) {
       // If matching, pop the top element from the stack
       st.pop();
      }
      else if((ch == ']' && topCh == '[')) {
       // If matching, pop the top element from the stack
       st.pop();
      }
      else {
        // brackets not matching
        return false;
      }
      
    }

  }

 }

 // After processing all characters, check if the stack is empty
 if (st.empty()) {
  // If stack is empty, the string has valid parentheses
  return true;
 }
 else {
  // If stack is not empty, some opening brackets are unmatched
  return false;
 }

}


int main() {
 string s = "{[()]}";

 if (isValid(s) == true) {
  cout << "The string has valid parentheses." << endl;
 }
 else {
  cout << "The string has invalid parentheses." << endl;
 }

 return 0;
}
