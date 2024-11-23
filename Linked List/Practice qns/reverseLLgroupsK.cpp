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

Node* reverseKNodes(Node* &head, int k) {
  if (head == NULL) {
   // case(01): when LL is empty
   cout << "LINKED LIST is empty" << endl;
   return head;
  }

  int len = getLength(head);
  // case(02):
  if (k > len) {
   cout << "Enter the valid value for K" << endl;
   return head;
  }

  // case(03): it means number of nodes in LL is >= K
  // step(a): reverse first K nodes of LL
  Node* prev = NULL;
  Node* curr = head;
  Node* temp = curr->next; // Use the outer `temp` here
  int count = 0;

  while (count < k) {
   temp = curr->next;  // Use the same `temp` variable
   curr->next = prev;
   prev = curr;
   curr = temp;
   count++;
  }

  // step(b): recursive call
  if (temp != NULL) {
   // we still have nodes left to reverse
   Node* recursionKaAns = reverseKNodes(temp, k);
   head->next = recursionKaAns;
  }

  // step(c): return head of the modified LL
  return prev;
}


int main() {
 Node* head = new Node(10);
 Node* second = new Node(20);
 Node* third = new Node(30);
 Node* fourth = new Node(40);
 Node* fifth = new Node(50);
 Node* sixth = new Node(60);

 head->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;

 cout<<"Printing LINKED LIST: "<<endl;
 print(head);
 cout<<endl;

 int len = getLength(head);
 cout<<"Length of the LL is: "<<len<<endl;
 cout<<endl;

 head = reverseKNodes(head, 3);
 cout<<endl;
 cout<<"Printing LINKED LIST after reversing in K groups: "<<endl;
 print(head);

 return 0;
}
