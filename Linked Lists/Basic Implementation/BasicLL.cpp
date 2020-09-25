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

    void addBeg(int data) {               //adds node at the begining of linked list
        Node * node = new Node(data);
        if (!head) {
            head = node;
            head -> next = NULL;
        } else {
            node -> next = head;
            head = node;
        }
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

    void addBefore(int data, int before) {  //adds node before a specified node
        Node * new_node = new Node(data);
        Node * curr = head;
        Node * prev = curr;
        while (curr -> val != before) {
             prev = curr;
              curr = curr -> next;
           
        }

        prev -> next = new_node;
        new_node -> next = curr;
    }
    void addafter(int data, int after)    //adds node after a specified node
    {
        Node* new_node=new Node(data);
        Node* curr=head;
        Node* prev=curr;
        while(prev->val!=after)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=new_node;
        new_node->next=curr;
    }
};


int main() {
    LinkedList l1; //ll is an object of type LinkedList

    cout << "Elements will be inserted in the end" << endl;

    for (int i = 1; i < 10; i++) {
        l1.AddEnd(i);
    }

    l1.display();

    LinkedList l2;

    cout << "Elements will be inserted in the beginning" << endl;

    for (int i = 0; i < 10; i++) {
        l2.addBeg(i);
    }
    l2.display();
    cout<<"Adding 10 before 7"<<endl;
    l2.addBefore(10, 7);
    l2.display();
    cout<<"Adding 11 after 7"<<endl;
    l2.addafter(11,7);
    l2.display();

    return 0;
}
