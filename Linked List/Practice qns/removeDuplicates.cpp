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

int getLength(Node* &head) {
 int len = 0;
 Node* temp = head;
 while(temp != NULL) {
  temp = temp->next;
  len++;
 }
 return len;
}

void print(Node* &head) {
 Node* temp = head;
 while(temp != NULL) {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
 cout<<endl;
}

void removeDuplicates(Node* &head) {
  if(head == NULL) {
   cout<<"LINKED LIST is empty!"<<endl;
   return;
  }

  if(head->next == NULL) {
   cout<<"When LINKED LIST has a single node!"<<endl;
   return;
  }

  // when LL has more than one node(>1)
  Node* curr = head;
  while((curr != NULL) && (curr->next != NULL)) {
   if(curr->data == curr->next->data) {
    Node* temp = curr->next;
    // Equal: remove the duplicate
    curr->next = curr->next->next;

    // delete temp node i.e. duplicate node
    temp = NULL;
    delete temp;
   }
   else {
    // not equal: Move to the next node if no duplicate
    curr = curr->next;
   }
  }
}

int main() {
 Node* head = new Node(1);
 Node* second = new Node(2);
 Node* third = new Node(2);
 Node* fourth = new Node(3);
 Node* fifth = new Node(4);
 Node* sixth = new Node(4);

 head->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;

 cout<<"Printing the input LINKED LIST: "<<endl;
 print(head);
 cout<<endl;

 cout<<"LINKED LIST after removing the duplicates: "<<endl;
 removeDuplicates(head);
 print(head);
 cout<<endl;

 int len = getLength(head);
 cout<<"Length of the LINKED LIST: "<<len<<endl;
 cout<<endl;


}
















// // removing duplicates from unsorted LINKED LIST
// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class Node {
// public:
//   int data;
//   Node* next;

//   Node(int data) {
//     this->data = data;
//     this->next = NULL;
//   }
// };

// // Function to print the linked list
// void print(Node* head) {
//   Node* temp = head;
//   while (temp != NULL) {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
//   cout << endl;
// }

// void sortLinkedList(Node* &head) {
//   if (head == NULL || head->next == NULL) {
//    // No sorting needed for empty or single-node list
//    return;
//   }

//   vector<int> values;
//   Node* temp = head;

//   // Step(1): Transfer linked list data into the vector
//   while(temp != NULL) {
//    values.push_back(temp->data);
//    temp = temp->next;
//   }

//   // Step 2: Sort the vector
//   sort(values.begin(), values.end());

//   // Step 3: Update the linked list with sorted values
//   temp = head;
//   for (int i = 0; i < values.size(); i++) {
//    temp->data = values[i];
//    temp = temp->next;
//   }
// }

// // Function to remove duplicates from a sorted linked list
// void removeDuplicates(Node* &head) {
//   if(head == NULL) {
//    cout<<"LINKED LIST is empty!"<<endl;
//    return;
//   }

//   if(head->next == NULL) {
//    cout<<"When LINKED LIST has a single node!"<<endl;
//    return;
//   }

//   // when LL has more than one node(>1)
//   Node* curr = head;
//   while((curr != NULL) && (curr->next != NULL)) {
//    if(curr->data == curr->next->data) {
//     Node* temp = curr->next;
//     // Equal: remove the duplicate
//     curr->next = curr->next->next;

//     // delete temp node i.e. duplicate node
//     temp = NULL;
//     delete temp;
//    }
//    else {
//     // not equal: Move to the next node if no duplicate
//     curr = curr->next;
//    }
//   }
// }

// int main() {
//   // Creating an unsorted linked list
//   Node* head = new Node(4);    Node* second = new Node(2);
//   Node* third = new Node(2);
//   Node* fourth = new Node(1);
//   Node* fifth = new Node(4);
//   Node* sixth = new Node(3);

//   head->next = second;
//   second->next = third;
//   third->next = fourth;
//   fourth->next = fifth;
//   fifth->next = sixth;

//   cout << "Printing the Input LINKED LIST: " << endl;
//   print(head);
//   cout<<endl;

//   // Step 1: Sort the linked list
//   sortLinkedList(head);
//   cout << "Sorted LINKED LIST: " << endl;
//   print(head);
//   cout<<endl;

//   // Step 2: Remove duplicates
//   removeDuplicates(head);
//   cout << "LINKED LIST after removing duplicates: " << endl;
//   print(head);
//   cout<<endl;

//   return 0;
// }

