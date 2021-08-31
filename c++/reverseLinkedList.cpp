// C++ program to reverse a LinkedList
#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* link;
};

Node* START = NULL;

//we need to create a funtion to insert a Node.
void insertNodeAtEnd(char data){
    //dynamically allocate a memory
    Node* newNode = new Node();
    newNode->data = data; // assign data to it.
    newNode->link = NULL;
    
    //check if the list is Empty or not.
    if(START == NULL){
        //list is Empty!
        START = newNode;
    }
    else{
        //List is not Empty!
        //traverse to the last node.
        Node* temp = NULL;
        temp = START;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = newNode; //newNode attached to the last node in the List.
    }
}
// we need a funtion to print all the nodes in the List.
void traverse(){
    // for traversing we need a temp variable.
    Node* temp = NULL;
    temp = START; //both 'temp' and 'START' points to the first Node.
    
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

// we need a funtion to reverse the Linked List.
void reverse(){
    // we need 3 Node* for this task;
    Node* current = NULL; //used for traversing each Node, contains the address of current Node;
    Node* prev = NULL; // It contains the address of previous Node.
    Node* next = NULL; // It contains the address of next Node.
    
    current = START;
    //check if the List is Empty or not!
    if(START == NULL){
        cout<<"List is Empty, reverse operation cannot be performed!"<<endl;
    }
    else{
        while(current != NULL){
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        START = prev;
    }
}
int main() {
	// your code goes here
	insertNodeAtEnd('A');
	insertNodeAtEnd('B');
	insertNodeAtEnd('C');
	insertNodeAtEnd('D');
	insertNodeAtEnd('E');
	reverse();
	traverse();
	return 0;
}
