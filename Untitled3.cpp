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

int get_length(Node* head) {
    int length = 0;
    Node* ptr = head;
    
    while (ptr != NULL) {
        length++;
        ptr = ptr->next;
    }
    
    return length;
}

Node* insert_in_middle(Node* head, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;

    // Get the length of the list
    int length = get_length(head);
    
    // Find the middle position
    int middle_position = (length / 2) + 1;

    // If inserting at the start
    if (middle_position == 1) {
        new_node->next = head;
        return new_node;
    }

    // Traverse to the node just before the middle position
    Node* ptr = head;
    int current_position = 1;
    
    while (ptr != NULL && current_position < middle_position - 1) {
        ptr = ptr->next;
        current_position++;
    }

    // Insert the new node
    new_node->next = ptr->next;
    ptr->next = new_node;
    
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
    cout << "Enter value for the new node to insert in the middle: ";
    cin >> new_data;

    head = insert_in_middle(head, new_data);

    cout << "Updated Linked List: ";
    print_data(head);

    return 0;
}

