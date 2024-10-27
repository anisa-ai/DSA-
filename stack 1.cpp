#include <iostream>
using namespace std;

class Stack {
private:
    int top;         
    char stackArray[10]; 

public:
    Stack() {
        top = -1;  // Constructor initializes top to -1
    }
    
    void push(char c) {
        if (top == 9) {
            cout << "Stack is full!" << endl;
        } else {
            top++;
            stackArray[top] = c;
        }
    }
    
    char pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return '\0'; 
        } else {
            return stackArray[top--];
        }
    }
    
    char peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return '\0';
        } else {
            return stackArray[top];
        }
    }  
};

int main() {
    Stack s;
    int choice;
    char value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a character to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                value = s.pop();
                if (value != '\0') {
                    cout << "Popped: " << value << endl;
                }
                break;
            case 3:
                value = s.peek();
                if (value != '\0') {
                    cout << "Top of the stack: " << value << endl;
                }
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

