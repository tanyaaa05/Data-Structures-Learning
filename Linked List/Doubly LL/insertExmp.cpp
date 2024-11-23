#include<iostream>
using namespace std;

class Node {
 public:
 int data;
 Node* prev;
 Node* next;

 Node() {
  this->data = 0;
  this->prev = NULL;
  this->next = NULL;
 }

 Node(int data) {
  this->data = data;
  this->prev = NULL;
  this->next = NULL;
 }

};


void print(Node* &head) {

  // when LL is empty
  if (head == NULL) {
    cout << "List is empty!" << endl;
  }
  else{
    // when LL is not empty
    Node* temp = head;
    while(temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
  }
}

int getLength(Node* &head) {
  int len=0;
  Node* temp = head;

  while(temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {

 if(head == NULL) {
  Node* newNode = new Node(data);
  // when LINKED LIST is empty
  head = newNode;
  tail = newNode;
 }

 else {
  // when LINKED LIST is not empty
  // step(01): create a new node
  Node* newNode = new Node(data);

  // step(02):
  newNode->next = head;

  // step(03):
  head->prev = newNode;

  // step(04):
  head = newNode;

 }

}

void insertAtTail(Node* &head, Node* &tail, int data) {

 if(head == NULL) {
  // when LINKED LIST is empty
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
 }
 else {
  // when LINKED LIST is not empty
  // step(01): create a new node
  Node* newNode = new Node(data);

  // step(02):
  newNode->prev = tail;

  // step(03):
  tail->next = newNode;

  // step(04):
  tail = newNode;

 }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {

 if(head == NULL) {
  // when LINKED LIST is empty
  Node* newNode = new Node(data);
  head = newNode;
  tail = newNode;
 }

 else {
  // when LINKED LIST is not empty
  if(position == 1) {
   insertAtHead(head,tail,data);
   return;
  }

  int len = getLength(head);
  if(position > len) {
   insertAtTail(head, tail, data);
   return;
  }

  // insertion in middle
  // step(01): find prevNode and currNode
  int i = 1;
  Node* prevNode = head;

  // Traverse the linked list to find the node just before the target position
  // This loop runs until `i` becomes one less than the target position (position - 1)
  while(i < position - 1) {
    prevNode = prevNode->next;
    i++;
  }
  Node* currNode = prevNode->next;

  // step(02): create a new node
  Node* newNode = new Node(data);

  // step(03):
  prevNode->next = newNode;

  // step(04):
  newNode->prev = prevNode;

  // step(05):
  currNode->prev = newNode;

  // step(06):
  newNode->next = currNode;

}
}

int main() {

 Node* first = new Node(10);
 Node* second = new Node(20);
 Node* third = new Node(30);

 Node* head = first;
 Node* tail = third;

 first->next = second;
 second->next = third;

 second->prev = first;
 third->prev = second;

 cout<<"Printing LINKED LIST initially:"<<endl;
 print(head);
 cout<<endl;

 insertAtHead(head, tail, 105);
 cout<<endl;
 cout<<"After inserting data at head: "<<endl;
 print(head);
 cout<<endl;

 insertAtTail(head, tail, 110);
 cout<<endl;
 cout<<"After inserting data at tail: "<<endl;
 print(head);
 cout<<endl;

 insertAtPosition(head, tail, 120, 5);
 cout<<endl;
 cout<<"After inserting data at some postion: "<<endl;
 print(head);
 cout<<endl;

 return 0;
}
