#include<iostream>
using namespace std;

class Node {
 public:
 int data;
 Node* next;

 Node() {
  this->data = 0;
  this->next = NULL;
 }
 Node(int data) {
  this->data = data;
  this->next = NULL;
 }

 // TODO: Write a destructor to delete a node
 ~Node() {
  // write your code here
  cout<<"Node with value: "<<this->data<<" "<<"deleted";
 }

};

// I want to insert a node right at the head of LINKED LIST
void insertAtHead(Node* &head, Node* &tail, int data) {

 // Check for empty LINKED LIST
 if(head == NULL) {
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
  return;
 }

 // step(01): Create a node
 Node* newNode = new Node(data);

 // step(02): Connect with head node
 newNode->next = head;

 // step(03): update head
 head = newNode;
}

// I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head, Node* &tail, int data) {

 // Check for empty LINKED LIST
 if(head == NULL) {
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
  return;
 }

 // step(01): Create a node
 Node* newNode = new Node(data);

 // step(02): Connect with tail node
  tail->next = newNode;

 // step (03): update tail
 tail = newNode;
}

int findLength(Node* &head) {
 int len=0;
 Node* temp = head;
 while(temp != NULL) {
  temp = temp->next;
  len++;
 }
 return len;
}

// I want to insert a node at some position of LINKED LIST
void insertAtPosition(int data, int position, Node* &head, Node* &tail) {

 // Check for empty LINKED LIST
 if(head == NULL) {
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
  return;
 }

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
 Node* prev = head;
 while(i<position-1) {
  prev = prev->next;
  i++;
 }
 Node* curr = prev->next;

 // step(02): create a new node
 Node* newNode = new Node(data);

 // step(03):
 newNode->next = curr;

 // step(04):
 prev->next=newNode;
}

void print(Node* &head) {
 Node* temp = head;
 while(temp != NULL) {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
}

void deleteNode(Node* &head, Node* &tail, int position) {
 if(head == NULL) {
  cout<<"Cannot delete, bcs LINKED LIST is empty";
  return;
 }

 if(head->next == NULL) {
  // single node
  Node* temp = head;
  head = NULL;
  tail = NULL;
  delete temp;
  return;
 }

 int len = findLength(head);

 if(position>len) {
  cout<<"please enter the valid position"<<endl;
 }

// deleting first node
 if(position == 1) {
  Node* temp = head;
  head = head->next;
  temp->next = NULL;
  delete temp;
 }

 // deleting last node
 if(position == len) {
  // step(01): Find prev
  int i=1;
  Node* prev = head;
  while(i<position-1) {
   prev = prev->next;
   i++;
  }

  // step(02):
  prev->next = NULL;

  // step(03):
  Node* temp = tail;

  // step(04):
  tail = prev;

  // step(05):
  delete temp;
  return;
 }

 // deleting middle node
 // step(01): find prev and curr
 int i=1;
 Node* prev = head;
 while(i<position-1) {
  prev = prev->next;
  i++;
 }
 Node* curr = prev->next;

 // step(02):
 prev->next = curr->next;

 // step(03):
 curr->next = NULL;

 // step(04):
 delete curr;


}

int main() {

 Node* head = NULL;
 Node* tail = NULL;

 insertAtHead(head,tail,20);
 insertAtHead(head,tail,30);
 insertAtHead(head,tail,40);
 insertAtHead(head,tail,50);
 insertAtHead(head,tail,60);

 insertAtTail(head,tail,100);

 print(head);
 cout<<endl;

 cout<<endl;
 int len = findLength(head);
 cout<<"Length is: "<<len<<endl;
 cout<<endl;

 deleteNode(head,tail,5);
 cout<<endl;
 print(head);
 cout<<endl;

 return 0;

}
