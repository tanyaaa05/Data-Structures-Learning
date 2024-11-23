#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node* next;

 Node() {
  this->data=0;
  this->next=NULL;
 }

 Node(int data) {
  this->data=data;
  this->next=NULL;
 }

};

int findLength(Node* &head) {
 int len=0;
 Node* temp = head;
 while(temp != NULL) {
  temp = temp->next;
  len++;
 }
 return len;
}

// I want to insert a node right at the head of LINKED LIST
void insertAtHead(Node* &head, Node* &tail, int data) {


 if(head == NULL) {
  // Check for when LINKED LIST is empty
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
 }

 else {
  // Check for when LINKED LIST is non-empty
  // step(01): Create a node
  Node* newNode = new Node(data);

  // step(02): Connect with head node
  newNode->next = head;

  // step(03): update head
  head = newNode;
 }
}

// I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head, Node* &tail, int data) {

 // Check for when LINKED LIST is empty
 if(head == NULL) {
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
 }

 else{
  // Check for when LINKED LIST is non-empty
  // step(01): Create a node
  Node* newNode = new Node(data);

  // step(02): Connect with tail node
  tail->next = newNode;

  // step (03): update tail
  tail = newNode;
 }
}

// I want to insert a node at some position of LINKED LIST
void insertAtPosition(Node* &head, Node* &tail, int data, int position) {

 // Check for empty LINKED LIST
 if(head == NULL) {
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
 }

else {

 if(position == 1) {
  insertAtHead(head, tail, data);
  return;
 }

int len = findLength(head);
if(position > len) {
 insertAtTail(head, tail, data);
 return;
}

 // step(01): Find the position: prev & curr pointer
 int i=1;
 Node* prevNode = head;
 while(i<position-1) {
  prevNode = prevNode->next;
  i++;
 }
 Node* currNode = prevNode->next;

 // step(02): create a new node
 Node* newNode = new Node(data);

 // step(03):
 newNode->next = currNode;

 // step(04):
 prevNode->next=newNode;

}
}

void print(Node* &head) {
 Node* temp = head;
 while(temp != NULL) {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
}


// // recursive sol to reverse the LL
// Node* reverseUsingRecursion(Node* &prev, Node* &curr) {
//  // base case
//  if(curr == NULL) {
//   // LINKED LIST is reversed
//   return prev;
//  }

//  // solve 1 case then recursion will take care
//  Node* temp = curr->next;
//  curr->next = prev;
//  prev = curr;
//  curr = temp;

//  reverseUsingRecursion(prev, curr);

// }


// iterative sol to reverse the LL
Node* reverseUsingLoop(Node* &head) {
 Node* prev = NULL;
 Node* curr = head;

 while(curr != NULL) {
  Node* temp = curr->next;
  curr->next = prev;
  prev = curr;
  curr = temp;
 }
 return prev;
}

int main() {

 Node* head = NULL;
 Node* tail = NULL;

 insertAtHead(head,tail,20);
 insertAtHead(head,tail,60);
 insertAtTail(head,tail,30);
 insertAtTail(head,tail,40);
 insertAtTail(head,tail,50);
 insertAtTail(head,tail,100);
 cout<<"Inserting data at head and tail: "<<endl;
 print(head);
 cout<<endl;

 // Node* prev = NULL;
 // Node* curr = head;
 // head = reverseUsingRecursion(prev, curr);
 // cout<<endl;
 // cout<<"Printing the Reverse LL by using the recursive solution: "<<endl;
 // print(head);
 // cout<<endl;

 head = reverseUsingLoop(head);
 cout<<endl;
 cout<<"Printing the reverse LL by using the iterative solution: "<<endl;
 print(head);
 cout<<endl;

 return 0;

}
