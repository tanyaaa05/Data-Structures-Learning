#include <iostream>
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
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLength(Node* &head) {
  int len = 0;
  Node* temp = head;
  while (temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}

// Function to check if a linked list is circular
bool isCircular(Node* &head) {
  if (head == NULL) {
    // An empty list is not circular
    return false;
  }

  Node* slow = head;
  Node* fast = head;

  while (fast != NULL && fast->next != NULL) {

    // Move slow pointer by one step
    slow = slow->next;
    // Move fast pointer by two steps
    fast = fast->next->next;

    // If slow and fast meet, the list is circular
    if (slow == fast) {
      return true;
    }
  }

  // If the loop exits, no cycle exists
  return false;
}

int main() {
  // **Step 1: Create Nodes**
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);

  // **Step 2: Link Nodes Sequentially**
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  sixth->next = NULL; // Initially, the list is non-circular

  // **Step 3: Print the Initial Linked List**
  cout << "Printing LINKED LIST: " << endl;
  print(head);
  cout << endl;

  // **Step 4: Get and Print Length of the Linked List**
  int len = getLength(head);
  cout << "Length of the LL is: " << len << endl;
  cout << endl;

  // **Step 5: Check if the Linked List is Circular (Before Creating a Loop)**
  if (isCircular(head) == true) {
    cout << "The linked list is circular." << endl;
  }
  else {
    cout << "The linked list is not circular." << endl;
  }
  cout<<endl;

  // Making the list circular for testing
  // **Step 6: Make the Linked List Circular by Creating a Loop**
  sixth->next = head;
  cout << "Loop created: sixth node points back to the third node." << endl;

  // **Step 7: Check if the Linked List is Circular (After Creating a Loop)**
  if (isCircular(head)) {
    cout << "The linked list is circular after adding a loop." << endl;
  }
  else {
    cout << "The linked list is not circular." << endl;
  }

  return 0;
}





// NOTES:
// (01). isCircular Function:
// -> It uses two pointers (slow and fast) to traverse the list.
// -> If the slow and fast pointers meet, the linked list is circular.
// -> If fast reaches NULL, the list is not circular.

// (02). Testing:
// -> First, the list is tested as non-circular.
// -> Then, a loop is introduced (sixth->next = third), and the list is tested again to verify the circular condition.

// Qn. Why Add This Test?
// Ans. This test is designed to:
// (a). Verify that the isCircular function correctly identifies
// a non-circular linked list initially.
// (b). Test if the function can detect circularity when a loop
// is deliberately added.

// This ensures that the isCircular function works for both
// normal and circular linked lists.
