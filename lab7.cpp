#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;          
    char stackArray[SIZE];      
    int top = -1;                
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
                if (top == SIZE - 1) {
                    cout << "Stack is full!" << endl;
                } else {
                    cout << "Enter a character to push: ";
                    cin >> value;
                    top++;
                    stackArray[top] = value;
                }
                break;

            case 2: 
                if (top == -1) {
                    cout << "Stack is empty!" << endl;
                } else {
                    cout << "Popped: " << stackArray[top] << endl;
                    top--; // Move the top pointer down
                }
                break;

            case 3: // Peek operation
                if (top == -1) {
                    cout << "Stack is empty!" << endl;
                } else {
                    cout << "Top of the stack: " << stackArray[top] << endl;
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

