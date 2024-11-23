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

Node* getMiddleNode(Node* &head) {

 if(head == NULL) {
  // when LL is empty
  cout<<"LINKED LIST is empty"<<endl;
  return head;
 }

 if(head->next == NULL) {
  // when single node in LL
  return head;
 }

 // when LL have greater than 1 node
 Node* slow = head;
 Node* fast = head;

 while((slow!=NULL) & (fast!=NULL)) {
  fast = fast->next;
  if(fast != NULL) {
   fast = fast->next;
   slow = slow->next;
  }
 }
 return slow;
}

int main() {
 Node* head = new Node(10);
 Node* second = new Node(20);
 Node* third = new Node(30);
 Node* fourth = new Node(40);
 Node* fifth = new Node(50);

 head->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = NULL;

 cout<<"Printing LINKED LIST: "<<endl;
 print(head);
 cout<<endl;

 cout<<"Middle node is: "<<getMiddleNode(head) -> data<<endl;

 return 0;
}
