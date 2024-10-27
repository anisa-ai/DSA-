#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail; 

public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtFirst(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        } else {
            tail = newNode; 
        }

        head = newNode;
    }
    void deleteAtFirst() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; 
        }
        delete temp;
        cout << "First node deleted." << endl;
    }
    void deleteAtLast() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            tail = NULL;
            cout << "Last node deleted." << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        cout << "Last node deleted." << endl;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " = ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtFirst(10);
    dll.insertAtFirst(20);
    dll.insertAtFirst(30);
    dll.printList(); 
    dll.deleteAtFirst();
    dll.printList(); 
    dll.deleteAtLast();
    dll.printList(); 
    return 0;
}
