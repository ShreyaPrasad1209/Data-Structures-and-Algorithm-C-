#include <iostream>
using namespace std;

class LinkedList {
    public:
        class Node 
        {
            public:
            
            int val;
            Node *next,*prev;
            Node(int data) {
                val = data;
                next = NULL;
                prev=NULL;
            }
        };

    Node *head = NULL;

    void display() //prints linked list
    {

        Node * curr = head;
        while (curr) {
            cout << curr -> val << " ";
            curr = curr -> next;
        }
        cout << endl;
    }

    
    void addEnd(int data) 
    { 
        
        Node *temp = new Node(data);
        Node* curr=head;
        while(curr->next)
        {
            curr=curr->next;
        }
        
        curr->next=temp;
        temp->prev=curr;
        temp->next=NULL;

    }
    
    void addBeg(int data)
    {
        Node* temp= new Node(data);
        head->prev=temp;
        temp->next=head;
        temp->prev=NULL;
        head=temp;
    }
    
    void addBefore(int data, int before)
    {
        Node* temp= new Node(data);
        Node* curr=head;
        while(curr->val!=before)
        {
            curr=curr->next;
        }
        
        temp->next=curr;
        temp->prev=curr->prev;
        curr->prev->next=temp;
        curr->prev=temp;
    }
    
    void addAfter(int data, int after)
    {
        Node* temp= new Node(data);
        Node* curr=head;
        while(curr->val!=after)
        {
            curr=curr->next;
        }
        temp->prev=curr;
        temp->next=curr->next;
        curr->next->prev=temp;
        curr->next=temp;
    }
    
    void AddEnd(int data)
    {
      Node* temp=new Node(data);
      if(!head)
      {
          head=temp;
      }
      else
      {
          Node* curr=head;
          while(curr->next)
          {
              curr=curr->next;
          }
          temp->next=NULL;
          temp->prev=curr;
          curr->next=temp;
      }
    }
    
    
};


int main() {
    LinkedList l1; 

    for (int i = 1; i < 10; i++) {
        l1.AddEnd(i);
    }

    l1.display();
    
    l1.addBeg(0);
    l1.display();
    
    l1.addEnd(10);
    l1.display(); 
    
    l1.addAfter(60,6);
    l1.display();
    
    l1.addBefore(50,5);
    l1.display();



    return 0;
}       
