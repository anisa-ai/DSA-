#include <iostream>
#include <string>

using namespace std;

struct Node {
    string item;
    Node* nextNode;  // Renamed to avoid conflict
    Node(string itemName) : item(itemName), nextNode(NULL) {}  // Updated here
};

class GroceryList {
private:
    Node* head;
    Node* tail;

public:
    GroceryList() : head(NULL), tail(NULL) {}

    void addItem(const string& item) {
        Node* newNode = new Node(item);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->nextNode = newNode;
            tail = newNode;
        }
        cout << "Added: " << item << endl;
    }

    void removeItem(const string& item) {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        
        if (head->item == item) {
            Node* temp = head;
            head = head->nextNode;
            if (!head) tail = NULL;
            delete temp;
            cout << "Removed: " << item << endl;
            return;
        }

        Node* current = head;
        while (current->nextNode && current->nextNode->item != item) {
            current = current->nextNode;
        }

        if (current->nextNode) {
            Node* temp = current->nextNode;
            current->nextNode = current->nextNode->nextNode;
            if (temp == tail) tail = current;
            delete temp;
            cout << "Removed: " << item << endl;
        } else {
            cout << "Item not found: " << item << endl;
        }
    }

    void displayItems() const {
        if (!head) {
            cout << "The list is empty!" << endl;
            return;
        }
        
        cout << "Grocery List:" << endl;
        Node* current = head;
        while (current) {
            cout << "- " << current->item << endl;
            current = current->nextNode;
        }
    }

    ~GroceryList() {
        while (head) {
            Node* temp = head;
            head = head->nextNode;
            delete temp;
        }
    }
};

int main() {
    GroceryList list;
    list.addItem("Milk");
    list.addItem("Eggs");
    list.displayItems();
    list.removeItem("Eggs");
    list.displayItems();

    return 0;
}


