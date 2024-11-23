#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string &str) {
 stack<char> st;

 // Traverse the input string
 for(int i=0;i<str.length();i++) {
  char ch = str[i];

  // Push operators and opening parentheses onto the stack
  if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
   st.push(ch);
  }
  else {
   // If the character is a closing parenthesis or a lowercase letter
   if(ch == ')') {
    bool isRedundant = true;

    while(st.top() != '(') {
     char top = st.top();

     // If an operator is found, the parentheses are not redundant
     if( top == '+' || top == '-' || top == '*' || top == '/') {
      isRedundant = false;
     }
     // Pop the top element from the stack
     st.pop();
    }

    // Pop the opening parenthesis '('
    st.pop();
    // If no operator was found, the parentheses are redundant
    if(isRedundant == true) {
     return true;
    }

   }

  }

 }
 // If no redundant parentheses are found
 return false;
}

int main() {

 // Input test cases
 string str1 = "(a+b)";
 string str2 = "((a+b))";
 string str3 = "(a+(b*c))";
 string str4 = "(a)";

 // Test the function with each input
 cout << "Result for \"" << str1 << "\": ";
 if(redundantBrackets(str1) == true) {
  cout << "Redundant" << endl;
 }
 else {
  cout << "Not Redundant" << endl;
 }

 cout << "Result for \"" << str2 << "\": ";
 if(redundantBrackets(str2) == true) {
  cout << "Redundant" << endl;
 }
 else {
  cout << "Not Redundant" << endl;
 }

 cout << "Result for \"" << str3 << "\": ";
 if(redundantBrackets(str3) == true) {
  cout << "Redundant" << endl;
 }
 else {
  cout << "Not Redundant" << endl;
 }

 cout << "Result for \"" << str4 << "\": ";
 if(redundantBrackets(str4) == true) {
  cout << "Redundant" << endl;
 }
 else {
  cout << "Not Redundant" << endl;
 }

return 0;
}









// NOTE:
// exmp- " Result for \" ":
// (a). This is a string literal being printed.
// (b). The \" is an escape sequence for a double quote ("), allowing it to be included in the string without ending the string prematurely.
// (c). It prints the text: Result for "
