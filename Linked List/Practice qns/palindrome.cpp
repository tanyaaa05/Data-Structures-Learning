#include<iostream>
using namespace std;

class Node {
 public:
 int data;
 Node* next;

 Node(int data) {
  this->data = data;
  this->next = NULL;
 }

};

void print(Node* &head) {
 Node* temp = head;
 while(temp != NULL) {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
 cout<<endl;
}

Node* reverse(Node* &head) {
 Node* prev = NULL;
 Node* curr = head;
 Node* temp = curr->next;

 while(curr != NULL) {
  temp = curr->next;
  curr->next = prev;
  prev = curr;
  curr = temp;
 }
 return prev;
}

bool checkPalindrome(Node* &head) {
 if(head == NULL) {
  cout<<"LINKED LIST is empty"<<endl;
  return true;
 }

 if(head->next == NULL) {
  // when LL has a single node
  return true;
 }

 // when LL has more than one node(>1)

 // step(a): find the middle node
 Node* slow = head;
 Node* fast = head->next;

 while((fast != NULL) && (fast->next != NULL)) {
  // Move slow pointer by one step
  slow = slow->next;

  // Move fast pointer by two steps
  fast = fast->next->next;
 }
 // slow pointer is pointing to the middle/slow node

 // step(b): reverse LL after middle node
 Node* reverseLLKaHead = reverse(slow->next);

 // join the reversed LL into the left part
 slow->next = reverseLLKaHead;

 // step(c): start comparison
 Node* temp1 = head;
 Node* temp2 = reverseLLKaHead;

 while(temp2 != NULL) {
  if(temp1->data != temp2->data) {
   // if data is not equal then the LL is not palindrome
   return false;
  }
  else{
   // if data is equal then move forward
   temp1 = temp1->next;
   temp2 = temp2->next;
  }
 }
return true;
}

int main() {
 Node* head = new Node(10);
 Node* second = new Node(20);
 Node* third = new Node(30);
 Node* fourth = new Node(30);
 Node* fifth = new Node(20);
 Node* sixth = new Node(10);

 head->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;

 bool isPalindrome = checkPalindrome(head);

 if(isPalindrome == true) {
  cout<<"LINKED LIST is a valid palindrome"<<endl;
 }
 else {
  cout<<"LINKED LIST is not a palindrome"<<endl;
 }

}
