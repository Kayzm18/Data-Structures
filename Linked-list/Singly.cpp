#include <iostream>

using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to traverse and print the singly linked list
void traverseList(Node* head) {
    if(head == nullptr){
        cout<<"The list is empty";
    }

    while (head != nullptr) {

        // Printing data of current node
        cout << head->data << " ";

        // Moving to the next node
        head = head->next;
    }
    cout << endl;
}

int main() {
  
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList(head);

    return 0;
}