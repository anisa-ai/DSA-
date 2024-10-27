#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the beginning
    void insertAtFirst(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode; // Update tail if list was empty
        }

        head = newNode;
    }

    // Function to insert a node at the end
    void insertAtEnd(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode; // Update head if list was empty
        }

        tail = newNode;
    }

    // Function to print the doubly linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }

    // Destructor to free memory
    ~DoublyLinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    // Insert at end
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);

    std::cout << "After inserting at end: ";
    dll.printList(); // Output: 10 <-> 20 <-> 30 <-> NULL

    // Insert at first
    dll.insertAtFirst(5);
    dll.insertAtFirst(0);

    std::cout << "After inserting at first: ";
    dll.printList(); // Output: 0 <-> 5 <-> 10 <-> 20 <-> 30 <-> NULL

    return 0;
}



