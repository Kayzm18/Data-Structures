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
    cout<<"Enter the value you want to find "; cin>> key; 


    Node* curr =head;

    while(curr != NULL){
        if(curr->data == key) return true;


     curr = curr->next;    
    }
    return false;
}

void printlist(Node* head){
    Node* curr = head;
    while (curr != nullptr){
        cout<<" "<<curr->data;
        curr = curr->next;
    }
    cout<<endl;
} 


Node* Insertion(int new_data, Node* head){
    Node* new_node = new Node(new_data);

    new_node->next = head;

    return new_node;
}

Node* pop(int data1, Node* head){
    Node* new_node = new Node(data1);

    if(head == nullptr){
        return new_node;
    }

    Node* last = head;

    while(last->next != nullptr){
        last = last->next;
    }

    last->next = new_node;
    return head;
}

int main() {
  
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<"Orginal list ";
    printlist(head);


    cout<<"Inserting 5 at the begining"; 
    int data = 5;
    head = Insertion(data, head);  
    
    printlist(head);

    cout<<"Entering 50 at the end of the list";
    int data1 = 50;
    head = pop(data1, head);

    printlist(head);
    
    if (search(head))// searching for a value
        cout << "Yes\n";
    else
        cout << "No\n";

        return 0;
}