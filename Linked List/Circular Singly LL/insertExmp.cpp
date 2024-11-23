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
    while (true) {
        cout << temp->data << " ";
        temp = temp->next;

        // Break the loop when we return to the head
        if (temp == head) {
            break;
        }
    }
    cout << endl;
}

int getLength(Node* &head) {
    if (head == NULL){
     return 0;
    }

    int len = 0;
    Node* temp = head;

    while (true) {
        temp = temp->next;
        len++;
        if (temp == head) {
            break;
        }
    }
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

    // step(01): find prev node
    Node* prev = head;
    int i = 1;

    while (i < position - 1) {
        prev = prev->next;
        i++;
    }

    // step(02): create anew node
    Node* newNode = new Node(data);

    // step(02):
    newNode->next = prev->next;

    // step(03):
    prev->next = newNode;

    if (prev == tail) {
        tail = newNode;
    }
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
    cout<<endl;
    cout << "After inserting at head: " << endl;
    print(head);

    // Insert at tail
    insertAtTail(head, tail, 110);
    cout<<endl;
    cout << "After inserting at tail: " << endl;
    print(head);

    // Insert at a specific position
    insertAtPosition(head, tail, 120, 5);
    cout<<endl;
    cout << "After inserting at position 5: " << endl;
    print(head);

    return 0;
}




// Key Role: Updating the tail Pointer
// In a circular linked list, the tail pointer is used to:
// (i). Keep track of the last node in the list.
// (ii). Ensure the circular structure by pointing the tail->next back to the head.
