// JAVA program to reverse a LinkedList.
// In a LinkedList a Node is a user defined data type, which has data as well as address to the next Node.
class LinkedList{
    class Node{
        int data;
        Node link;
        
        Node(){
            data = 0 ;
            link = null;
        }
    }
    Node START = null; // it is not a memory block but just a reference of type Node.
    
    // we need a funtion to insert the data at the end of the list.
    void insertNodeAtEnd(int data){
        // Now we need to dynamically allocate a memory block for new Node.
        Node newNode = new Node();
        newNode.data = data;
        
        //check if START is null or not.
        if(START == null){
            //List is Empty.
            START = newNode;
        }
        else{
            //List is not empty.
            Node temp = null; //this is also a reference variable of type Node.
            temp = START; //both temp and START points to 1st Node in the List.
            while(temp.link != null){
                temp = temp.link;
            }
            temp.link = newNode; //newNode inserted to the last of the List.
        }
        
    }
    
    // we need a funtion to print all the Nodes in the List.
    void traverse(){
        Node temp = null;
        temp = START;
        //check if START is null or not.
        if(START == null){
            //list is empty.
            System.out.println("List is Empty!");
        }
        else{
            //List is not Empty.
            while(temp != null){
                System.out.print(temp.data+" ");
                temp = temp.link;
            }
        }
    }
    
    //Funtion to reverse a Linked List.
    void reverse(){
        Node current = null;
        Node prev = null;
        Node next = null;
        
        current = START; //both START and current points to 1st Node.
        
        // check if List is empty or not
        if(current == null){
            //list is empty
            System.out.println("List is Empty, reverse operation cannot be performed!");
        }
        else{
            //list is not empty.
            while(current != null){
                next = current.link;
                current.link = prev;
                prev = current;
                current = next;
            }
            START = prev;
        }
    }
}

class ReverseLinkedList{
    public static void main (String[] args) {
        LinkedList list = new LinkedList();
        list.insertNodeAtEnd(12);
        list.insertNodeAtEnd(14);
        list.insertNodeAtEnd(16);
        list.insertNodeAtEnd(18);
        list.insertNodeAtEnd(20);
        list.reverse();
        list.traverse();
    }
}
