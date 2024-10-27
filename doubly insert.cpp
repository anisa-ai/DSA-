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
public:
    
    DoublyLinkedList() {
        head = NULL;
    }
    void insertAtFirst(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    }

 void insertAtLast(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL; 
        newNode->prev = NULL;
        if (head == NULL) {
            head = newNode;
            return;
        }
Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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
    dll.insertAtLast(40);
    dll.printList(); 
    return 0;
}
