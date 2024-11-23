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

int getLength(Node* &head) {
 int len = 0;
 Node* temp = head;
 while(temp != NULL) {
  temp = temp->next;
  len++;
 }
 return len;
}

// step(01): function to detect a LOOP
bool isLoopPresent(Node* &head) {
  if (head == NULL) {
    // when LL is empty
    return false;
  }

  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL) {

    // Move slow pointer by one step
    slow = slow->next;
    // Move fast pointer by two steps
    fast = fast->next->next;

    // Loop detected
    if (slow == fast) {
      return true;
    }
  }

  // fast becomes NULL : NO Loop
  return false;
}

// step(02): find starting point of the LOOP
Node* startingPointLoop(Node* &head) {
  if (head == NULL) {
    // when LL is empty
    return NULL;
  }

  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL) {

    // Move slow pointer by one step
    slow = slow->next;
    // Move fast pointer by two steps
    fast = fast->next->next;

    if (slow == fast) {
      slow = head;
      break;
    }
  }

  while(slow != fast) {
   slow = slow->next;
   fast = fast->next;
  }

  return slow;
}

// step(03): remove LOOP
Node* removeLoop(Node* &head) {
  if (head == NULL) {
    // when LL is empty
    return NULL;
  }

  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL) {

    // Move slow pointer by one step
    slow = slow->next;
    // Move fast pointer by two steps
    fast = fast->next->next;

    if (slow == fast) {
      slow = head;
      break;
    }
  }

  Node* prev = fast;
  while(slow != fast) {
   prev = fast;
   slow = slow->next;
   fast = fast->next;
  }
  prev->next = NULL;

  return slow;
}


int main() {
 Node* head = new Node(10);
 Node* second = new Node(20);
 Node* third = new Node(30);
 Node* fourth = new Node(40);
 Node* fifth = new Node(50);
 Node* sixth = new Node(60);
 Node* seventh = new Node(70);
 Node* eighth = new Node(80);
 Node* ninth = new Node(90);


 head->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;
 sixth->next = seventh;
 seventh->next = eighth;
 eighth->next = ninth;
 ninth->next = fifth;

 // cout<<"Printing LINKED LIST: "<<endl;
 // print(head);
 // cout<<endl;

 cout<<"Loop is present or not: "<<isLoopPresent(head)<<endl;
 cout<<endl;
 cout<<"Starting point of LOOP is: "<<startingPointLoop(head)->data<<endl;
 cout<<endl;

 removeLoop(head);
 cout<<"Printing the LINKED LIST after removing the LOOP: "<<endl;
 print(head);
 cout<<endl;
 
 cout<<"Loop is present or not: "<<isLoopPresent(head)<<endl;
 cout<<endl;

 int len = getLength(head);
 cout<<"Length of the LL is: "<<len<<endl;
 cout<<endl;

 return 0;
}
