#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void print_data(Node* head) {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return;
    }
    
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

Node* insert_at_start(Node* head, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    return new_node;
}


Node* insert_at_end(Node* head, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL) {  
        return new_node;
    }

    Node* ptr = head;
    while (ptr->next != NULL) {  
        ptr = ptr->next;
    }
    
    ptr->next = new_node;  
    return head;
}


Node* delete_at_end(Node* head) {
    if (head == NULL) {  
        cout << "List is empty, nothing to delete." << endl;
        return head;
    }

    if (head->next == NULL) {  
        delete head;
        head = NULL;
        return head;
    }

    
    Node* ptr = head;
    Node* prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }

    
    prev->next = NULL;  
    delete ptr; 

    return head;
}

int main() {
   
    Node node1, node2, node3, node4;

    cout << "Enter value for Node 1: ";
    cin >> node1.data;
    node1.next = &node2;

    cout << "Enter value for Node 2: ";
    cin >> node2.data;
    node2.next = &node3;

    cout << "Enter value for Node 3: ";
    cin >> node3.data;
    node3.next = &node4;

    cout << "Enter value for Node 4: ";
    cin >> node4.data;
    node4.next = NULL;

    Node* head = &node1;

    cout << "Original Linked List: ";
    print_data(head);

    
    int new_data;
    cout << "Enter value for the new node to insert at the end: ";
    cin >> new_data;
    head = insert_at_end(head, new_data);

    cout << "Updated Linked List after insertion: ";
    print_data(head);

    
    head = delete_at_end(head);
    cout << "Updated Linked List after deletion: ";
    print_data(head);

    return 0;
}

