
#include<iostream>
using namespace std;

class LinkedList
{
    public:
    class Node
    {
        public:
        int val;
        Node* next;
        Node(int data)
        {
            val=data;
            next=NULL;
        }
    };
    
    Node* head=NULL;
    void display(){
        
        Node* curr=this->head;
        while(curr!=nullptr){
            cout<<curr->val<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
    
    void addBeg(int data)
    {
       Node *node = new Node(data);
        if (!head)
        {
            head = node;
            head->next=NULL;
        }
        else                
        {                                      
          node->next=head;       
          head=node;
        }
    }
    void AddEnd(int data)
    {
        Node* node=new Node(data);
        if(!head)
        {
            head=node;
            head->next=NULL;
        }
        Node* temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=node;
        node->next=NULL;

    }
};


int main(){
    LinkedList ll;
    for(int i=1;i<10;i++){
        ll.AddEnd(i*10);
    }
    ll.display();

    return 0;
}
