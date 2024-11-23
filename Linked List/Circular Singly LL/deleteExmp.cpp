#include <iostream>
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
};

// Print the Circular Singly Linked List
void print(Node* &head) {
  if (head == NULL) {
   cout << "List is empty!" << endl;
   return;
  }

  Node* temp = head;

  // Traverse and print the circular linked list
  do {
   cout << temp->data << " ";
   temp = temp->next;
  } while (temp != head);
  cout << endl;
}

int getLength(Node* &head) {
  if (head == NULL) {
   return 0;
  }

  int len = 0;
  Node* temp = head;

  do {
   len++;
   temp = temp->next;
  } while (temp != head);

  return len;
}

// Insert a node at the head
void insertAtHead(Node* &head, Node* &tail, int data) {
  Node* newNode = new Node(data);
  if (head == NULL) {
   head = newNode;
   tail = newNode;
   newNode->next = head; // Point to itself
   }
  else {
   newNode->next = head;
   head = newNode;
   tail->next = newNode; // Update tail to point to new head
  }
}

// Insert a node at the tail
void insertAtTail(Node* &head, Node* &tail, int data) {
  Node* newNode = new Node(data);
  if (head == NULL) {
   head = newNode;
   tail = newNode;
   newNode->next = head;
  }
  else {
   tail->next = newNode;
   tail = newNode;
   newNode->next = head; // Circular linkage
  }
}

// Insert a node at a specific position
void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
  if (head == NULL) {
   Node* newNode = new Node(data);
   head = newNode;
   tail = newNode;
   newNode->next = head; // Make it circular
   return;
  }

  if (position == 1) {
   insertAtHead(head, tail, data);
   return;
  }

  int len = getLength(head);
  if (position > len) {
   insertAtTail(head, tail, data);
   return;
  }

  // Step (01): Find previous node
  Node* prev = head;
  int i = 1;

  while(i < position - 1) {
   prev = prev->next;
   i++;
  }

  // Step (02): Create a new node
  Node* newNode = new Node(data);

  // Step (03):
  newNode->next = prev->next;

  // Step (04):
  prev->next = newNode;

  if(prev == tail) {
   tail = newNode;
  }
}

// Delete a node at a specific position
void deleteNode(Node* &head, Node* &tail, int position) {
  if(head == NULL) {
   cout << "Cannot delete, the list is empty!" << endl;
   return;
  }

  int len = getLength(head);
  if(position > len) {
   cout << "Please enter a valid position." << endl;
   return;
  }

  // Deleting the first node
  if (position == 1) {
   Node* temp = head;
   if (head->next == NULL) {
    // Single node in the list
    head = NULL;
    tail = NULL;
   }
   else {
    head = head->next;
    tail->next = head; // Update tail to point to new head
   }
   temp->next = NULL;
   delete temp;
   return;
  }

  // Deleting the last node
  if (position == len) {

  int i=1;
  Node* prev = head;
   while(i<position-1) {
    prev = prev->next;
    i++;
   }
   prev->next = head; // Update previous node to point to head
   delete tail;
   tail = prev;
   return;
  }

  // Deleting a middle node
  // step(01): find prev and curr
  Node* prev = head;
  int i = 1;
  while(i < position - 1) {
   prev = prev->next;
   i++;
  }
  Node* curr = prev->next;

  // step(02): Bypass the node to be deleted
  prev->next = curr->next;

  // step(03):
  curr->next = NULL;

  // step(04):
  delete curr;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  // Initial list
  insertAtHead(head, tail, 10);
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 30);

  cout << "Initial list: " << endl;
  print(head);

  // Insert at head
  insertAtHead(head, tail, 105);
  cout << endl;
  cout << "After inserting at head: " << endl;
  print(head);

  // Insert at tail
  insertAtTail(head, tail, 110);
  cout << endl;
  cout << "After inserting at tail: " << endl;
  print(head);

  // Insert at a specific position
  insertAtPosition(head, tail, 120, 5);
  cout << endl;
  cout << "After inserting at position 5: " << endl;
  print(head);

  // Delete first node
  deleteNode(head, tail, 1);
  cout << endl;
  cout << "After deleting the first node: " << endl;
  print(head);

  // Delete last node
  deleteNode(head, tail, getLength(head));
  cout << endl;
  cout << "After deleting the last node: " << endl;
  print(head);

  // Delete middle node
  deleteNode(head, tail, 3);
  cout << endl;
  cout << "After deleting node at position 3: " << endl;
  print(head);

  return 0;
}
