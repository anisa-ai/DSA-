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
}
int main()
{
Node node1, node2, node3, node4;
cout<<"Enter value for Node 1:";
cin>>node1.data;
node1.next=&node2;
cout<<"Enter value for Node 2:";
cin>>node2.data;
node2.next=&node3;
cout<<"Enter value for Node 3:";
cin>>node3.data;
node3.next=&node4;
cout<<"Enter value for Node 4:";
cin>>node4.data;
node4.next=NULL;
cout<<"Linked list value:";
Node*head=&node1;
print_data(head);

return 0;
}
