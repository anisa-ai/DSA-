#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class CircularSinglyLinkedList {
public:
    Node* head;
    CircularSinglyLinkedList() {
        head = NULL;
    }

    // Insert a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
    }

    // Insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Count the number of nodes in the list
    int countNodes() {
        if (!head) return 0;
        Node* temp = head;
        int count = 0;
        do {
            count++;
            temp = temp->next;
        } while (temp != head);
        return count;
    }

    // Insert a node in the middle of the list
    void insertAtMiddle(int value) {
        if (!head || head->next == head) {
            insertAtBeginning(value);
            return;
        }
        int count = countNodes();
        int mid = count / 2;
        Node* temp = head;
        for (int i = 1; i < mid; ++i) {
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "HEAD" << endl;
    }
};

int main() {
    CircularSinglyLinkedList list;  // Correct instantiation of the list

    // Test inserting at the end
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    cout << "List after inserting at the end:" << endl;
    list.display();

    // Test inserting at the beginning
    list.insertAtBeginning(5);
    cout << "List after inserting at the beginning:" << endl;
    list.display();

    // Test inserting in the middle
    list.insertAtMiddle(15);
    cout << "List after inserting in the middle:" << endl;
    list.display();

    return 0;
}

