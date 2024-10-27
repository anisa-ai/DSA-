
#include <iostream>
using namespace std;
class Node {
public:
 int data;
 Node* next;
 Node* prev;
 Node(int value) {
 data = value;
 next = NULL;
 prev = NULL;
 }
};
class DoublyCircularLinkedList {
public:
 Node* head;
 DoublyCircularLinkedList() {
 head = NULL
 
 ;
 }
 void insertAtBeginning(int value) {
 Node* newNode = new Node(value);
 if (!head) {
 head = newNode;
 newNode->next = head;
 newNode->prev = head;
 } else {
 Node* last = head->prev;
 newNode->next = head;
 newNode->prev = last;
 head->prev = newNode;
 last->next = newNode;
 head = newNode;
 }
 }
 void insertAtEnd(int value) {
 Node* newNode = new Node(value);
 if (!head) {
 head = newNode;
 newNode->next = head;
 newNode->prev = head;
 } else {
 Node* last = head->prev;
 newNode->next = head;
 newNode->prev = last;
 last->next = newNode;
 head->prev = newNode;
 }
 }
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
 void insertAtMiddle(int value) {
 if (!head || head->next == head) {
 // If the list is empty or only has one node, insert at the beginning
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
 newNode->prev = temp;
 temp->next->prev = newNode;
 temp->next = newNode;
 }
 void display() {
 if (!head) {
 cout << "List is empty." << endl;
 return;
 }
 Node* temp = head;
 do {
 cout << temp->data << " <-> ";
 temp = temp->next;
 } while (temp != head);
 cout << "HEAD" << endl;
 }
};
int main() {
 DoublyCircularLinkedList list;
 list.insertAtEnd(10);
 list.insertAtEnd(20);
 list.insertAtEnd(30);
 cout << "List after inserting at the end:" << endl;
 list.display();
 list.insertAtBeginning(5);
 cout << "List after inserting at the beginning:" << endl;
 list.display();
 list.insertAtMiddle(15);
 cout << "List after inserting in the middle:" << endl;
 list.display();
 return 0;
}
