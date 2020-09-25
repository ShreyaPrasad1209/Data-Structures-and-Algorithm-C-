#include <iostream>
using namespace std;

class LinkedList {
    public:
        class Node {
            public:
                int val;
            Node * next;
            Node(int data) {
                val = data;
                next = NULL;
            }
        };

    Node * head = NULL;

    void display() //prints linked list
    {

        Node * curr = head;
        while (curr) {
            cout << curr -> val << " ";
            curr = curr -> next;
        }
        cout << endl;
    }

    
    void AddEnd(int data) { //adds node in the end of linked list
        Node * node = new Node(data);
        if (!head) {
            head = node;
            head -> next = NULL;
        }
        Node * temp = head;
        while (temp -> next) {
            temp = temp -> next;
        }
        temp -> next = node;
        node -> next = NULL;

    }


    
    void deleteFirst()
    {
       Node* temp=head;
       head=head->next;
       delete temp;
    }
    
    void deleteEnd()
    {
        Node* temp, *prev;
        temp=head;
        while(temp->next)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
    }
    
    void deleteSpecificNode(int data)
    {
        Node* temp, *prev;
        temp=head;
        while(temp->val!=data)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
    }
    
    void deleteAfter(int after)
    {
        Node* temp, *prev;
        temp=head;
        prev=temp;
        while(prev->val!=after)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        
    }
};


int main() {
    LinkedList l1; 

    for (int i = 1; i < 10; i++) {
        l1.AddEnd(i);
    }

    l1.display();
    
    l1.deleteFirst();
    
    l1.display();
    l1.deleteEnd();
    l1.display(); 
    
    l1.deleteAfter(5);
    
    l1.display();
    
    l1.deleteSpecificNode(7);
    l1.display();



    return 0;
}
