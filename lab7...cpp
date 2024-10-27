#include <iostream>
#include <string>
using namespace std;
class PlateStack {
private:
static const int MAX_SIZE = 3; 
string plates[MAX_SIZE]; 
int top; 

public:
PlateStack() : top(-1) {} 
void addPlate(const string& plate) {
    if (top < MAX_SIZE - 1) { 
    plates[++top] = plate; 
    cout << "Added plate: " << plate << endl;
    } else {
    cout << "Stack is full! Cannot add more plates." << endl;
        }
    }
void removePlate() {
    if (top >= 0) { 
    cout << "Removed plate: " << plates[top--] << endl; 
    } else {
    cout << "Stack is empty! Cannot remove plates." << endl;
        }
    }
    void checkTopPlate() const {
    if (top >= 0) { 
	    cout << "Top plate: " << plates[top] << endl;
        } else {
       cout << "Stack is empty! No top plate." << endl;
        }
    }
};

int main() {
    PlateStack stack; 
    stack.addPlate("Plate 1");
    stack.addPlate("Plate 2");
    stack.addPlate("Plate 3");
    stack.addPlate("Plate 4"); 

    stack.checkTopPlate(); 

    stack.removePlate(); 
    stack.removePlate();
    stack.removePlate();
    stack.removePlate(); 

    stack.checkTopPlate(); 

    return 0;
}
