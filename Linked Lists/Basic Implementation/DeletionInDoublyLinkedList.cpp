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
    
    void deleteBeg()
    {
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
    }
    
    void deleteEnd()
    {
        Node* curr=head;
        while(curr->next)
        {
            curr=curr->next;
        }
        
        Node* temp=curr;
        curr->prev->next=NULL;
        delete temp;
    }
    
    void deleteAfter(int after)
    {
        Node* curr=head;
        while(curr->val!=after)
        {
            curr=curr->next;
        }
        Node* temp=curr->next;
        curr->next=curr->next->next;
        curr->next->next->prev=curr;
        delete temp;
    }
    
   void deleteBefore(int before)
    {
        Node* curr=head;
        while(curr->next->val!=before)
        {
            curr=curr->next;
        }
      curr->prev->next = curr->next;
   
      curr->next->prev = curr->prev;
  
      delete curr;

    }
    
    
};


int main() {
    LinkedList l1; 

    for (int i = 1; i < 10; i++) {
        l1.AddEnd(i);
    }

    l1.display();
    
     l1.deleteBefore(3);
     l1.display();
    
    l1.deleteAfter(2);
    l1.display(); 
    
    l1.deleteEnd();
    l1.display();
    
    l1.deleteBeg();
    l1.display();



    return 0;
}
