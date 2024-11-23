#include<iostream>
using namespace std;

class Node {
 public:
 int data;
 Node* next;

 // Constructor to initialize a node with data
 Node(int data) {
  this->data = data;
  this->next = NULL;
 }
};

// Function to print the linked list
void print(Node* &head) {
 Node* temp = head;
 while(temp != NULL) {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
 cout<<endl;
}

// Function to sort the linked list containing 0s, 1s, and 2s
Node* sortZeroOneTwo(Node* &head) {
  if(head == NULL) {
   cout<<"LINKED LIST is empty!"<<endl;
   return NULL;
  }

  if(head->next == NULL) {
   cout<<"When LINKED LIST has a single node!"<<endl;
   return head;
  }
  // Step 1: Create dummy nodes for zero, one, and two lists
  Node* zeroHead = new Node(-1);
  Node* zeroTail = zeroHead;

  Node* oneHead = new Node(-1);
  Node* oneTail = oneHead;

  Node* twoHead = new Node(-1);
  Node* twoTail = twoHead;

  // Step 2: Traverse the original linked list and segregate nodes
  // Pointer to traverse the original list
  Node* curr = head;
  while(curr != NULL) {

   if(curr->data == 0) {
    // Move 0 node to zero list
    Node* temp = curr;
    curr = curr->next;
    temp->next = NULL;

    // Append to zero list
    zeroTail->next = temp;
    zeroTail = temp;
   }

   else if(curr->data == 1) {
    // Move 1 node to one list
    Node* temp = curr;
    curr = curr->next;
    temp->next = NULL;

    // Append to one list
    oneTail->next = temp;
    oneTail = temp;
   }

   else if(curr->data == 2) {
    // Move 2 node to two list
    Node* temp = curr;
    curr = curr->next;
    temp->next = NULL;

    // Append to two list
    twoTail->next = temp;
    twoTail = temp;
   }

  }

  // Step 3: Merge the three lists (zeroHead, oneHead, twoHead)
  // Remove dummy nodes and join lists in the correct order

  // Step 3(a): Modify the oneHead list
  Node* temp = oneHead;
  oneHead = oneHead->next;
  // Remove dummy node from oneHead
  temp->next = NULL;
  delete temp;

  // Step 3b: Modify the twoHead list
  temp = twoHead;
  twoHead = twoHead->next;
  // Remove dummy node from twoHead
  temp->next = NULL;
  delete temp;

  // Step 3(c): Join the lists
  if(oneHead != NULL) {
   // If oneHead is not empty
   zeroTail->next = oneHead;
   if(twoHead != NULL) {
    // If twoHead is not empty
    oneTail->next = twoHead;
   }
  }
  else {
   // If oneHead is empty, only join 2nd list after 0 list
   if(twoHead != NULL) {
    zeroTail->next = twoHead;
   }
  }

  // Step 3(d): Remove the dummy node from zeroHead
  temp = zeroHead;
  zeroHead = zeroHead->next;
  temp->next = NULL;
  delete temp;

  // Step 3(e): Return the head of the new sorted list
  return zeroHead;
}

int main() {
  // Step 1: Create a linked list with values 1, 2, 1, 1, 2, 0
  Node* head = new Node(0);
  Node* second = new Node(1);
  Node* third = new Node(2);
  Node* fourth = new Node(1);
  Node* fifth = new Node(1);
  Node* sixth = new Node(0);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;

  // Step 2: Print the original linked list
  cout << "Printing the input LINKED LIST: " << endl;
  print(head);
  cout << endl;

  // Step 3: Sort the list using the sortZeroOneTwo function
  head = sortZeroOneTwo(head);

  // Step 4: Print the sorted linked list
  cout << "Printing the LINKED LIST after sorting zeroes, ones, and twos: " << endl;
  print(head);
  cout << endl;

  return 0;
}















// #include<iostream>
// using namespace std;

// class Node {
//  public:
//  int data;
//  Node* next;

//  Node(int data) {
//   this->data = data;
//   this->next = NULL;
//  }

// };

// void print(Node* &head) {
//  Node* temp = head;
//  while(temp != NULL) {
//   cout<<temp->data<<" ";
//   temp = temp->next;
//  }
//  cout<<endl;
// }

// void sortZeroOneTwo(Node* &head) {
//  // step(01): find count of zeroes, ones and twos
//  int zero = 0;
//  int one = 0;
//  int two = 0;

//  Node* temp = head;
//  while(temp != NULL) {
//   if(temp->data == 0) {
//    zero++;
//   }
//   else if(temp->data == 1) {
//    one++;
//   }
//   else if(temp->data == 2) {
//    two++;
//   }
//   temp = temp->next;
//  }

//  // step(02): fill 0, 1 and 2's in the original LINKED LIST
//  temp = head;

//   // fill zeroes
//   while(zero--) {
//    temp->data = 0;
//    temp = temp->next;
//   }

//   // fill ones
//   while(one--) {
//    temp->data = 1;
//    temp = temp->next;
//   }

//   // fill twos
//   while(two--) {
//    temp->data = 2;
//    temp = temp->next;
//   }

// }

// int main() {
//  Node* head = new Node(1);
//  Node* second = new Node(2);
//  Node* third = new Node(1);
//  Node* fourth = new Node(1);
//  Node* fifth = new Node(2);
//  Node* sixth = new Node(0);

//  head->next = second;
//  second->next = third;
//  third->next = fourth;
//  fourth->next = fifth;
//  fifth->next = sixth;

//  cout<<"Printing the input LINKED LIST: "<<endl;
//  print(head);
//  cout<<endl;

//  cout<<"Printing the LINKED LIST after sorting zeroes, ones and twos: "<<endl;
//  sortZeroOneTwo(head);
//  print(head);
//  cout<<endl;

// }

