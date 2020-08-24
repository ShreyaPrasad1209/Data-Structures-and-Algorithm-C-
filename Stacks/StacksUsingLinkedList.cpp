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
    int size;
    bool isEmpty()
    {
        return size==0;
    }
    
    void push(int data)
    {
        int count=0;
        Node* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        if(count==size)
        {
            return;
        }
        else
        {
            Node* node=new Node(data);
            if(!head)
            {
                head=node;
                head->next=NULL;
            }
            else
            {
                node->next=head;
                head=node;
            }
        }
        
    }
    
    int peek()
    {
       if(!head)
       {
           cout<<"-1"<<endl;
       }
       else
       {
           cout<<head->val<<endl;
       }
       return 0;
    }
    void pop()
    {
        if(!head)
        return;
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    
    void display()
    {
        Node* temp=head;
        while(temp)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
};

int main()
{
    LinkedList ll;
    cout<<"Enter size of stack"<<endl;
    cin>>ll.size;
    for(int i=1;i<=ll.size;i++)
    {
        ll.push(i*10);
    }
    ll.display();
    
    ll.pop();
    ll.display();
    
    ll.peek();
    cout<<ll.isEmpty()<<endl;
    return 0;
}
