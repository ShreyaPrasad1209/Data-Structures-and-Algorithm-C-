//Queue implementation using Vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Queue
{
    public:
    vector<int>q;
    int size;
    
    
    void enqueue(int data)
    {
        if(size==q.size())
        {
            cout<<"Queue reached limit!"<<endl;
            return;
        }
        
       q.insert(q.end(),data);
    }
    
    void deque()
    {
        if(q.empty())
        {
            cout<<"Queue is empty!"<<endl;
            return;
        }
        
        else
        {
            q.erase(q.begin());
        }
        
    }
    
    void front()
    {
          if(q.empty())
        {
            cout<<"Queue is empty!"<<endl;
        }
        
        cout<<"Front is:"<< *(q.begin())<<endl;
        
    }
    
    void rear()
    {
        
          if(q.empty())
        {
            cout<<"Queue is empty!"<<endl;
        }
        
        cout<<"Rear is:"<< q.back()<<endl;
    }
    
    void display()
    {
          if(q.empty())
        {
            cout<<"Queue is empty!"<<endl;
            return;
        }
        
        cout<<"Queue is:"<<endl;
        
        for(int i=0;i<q.size();i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {

    Queue q1;
    
    cout<<"Enter size of queue"<<endl;
    cin>>q1.size;
    
    for(int i=1;i<q1.size;i++)
    {
        q1.enqueue(i*10);
    }
    
    q1.display();
    
    q1.rear();
    
     q1.front();
   
     
     q1.deque();
     q1.display();
    
return 0;

}
