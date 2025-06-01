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

        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool search(Node* head){
    int key;
    cout<<"Enter the value you want to find"; cin>> key; 


    Node* curr =head;

    while(curr != NULL){
        if(curr->data == key) return true;


     curr = curr->next;    
    }
    return false;
}

int main() {
  
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList(head);


    if (search(head))// searching for a value
        cout << "Yes";
    else
        cout << "No";

    return 0;
}