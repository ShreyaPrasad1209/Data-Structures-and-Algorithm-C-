/******************************************************************************
                     Stack implementation using vectors
*******************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Stack
{
  public:
  
//   Basic data members   
  vector<int>st;
  int size;
  int val;
  
//   Functions
  void push(int val);
  void pop();
  int  peek();
  bool isEmpty();
  void display();
  bool isFull();
};

bool Stack::isFull()
{
    return st.size()==size;
    
}

void Stack::push(int val)
{
    if(isFull())
    {
        cout<<"Insufficient space"<<endl;
        return;
    }
    else
    st.push_back(val);
}

void Stack::pop()
{
    if(st.size()<1)
      return;
      
    st.pop_back(); 
}

int Stack::peek()
{
    cout<<st.back()<<endl;
}

bool Stack::isEmpty()
{
    return st.empty();
}

void Stack::display()
{
   cout<<"Contents of stack starting from bottom are"<<endl;
    for(auto i=st.begin();i!=st.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

int main()
{
    Stack s;
  
    cout<<"Enter size of stack"<<endl;
    cin>>s.size;
    int Size=s.size;
    cout<<"Push elements in stack of size "<<Size<<endl;
    while(Size)
    {
        int x;
        cin>>x;
        s.push(x);
        --Size;
    }
    s.display();
    cout<<"Using pop function"<<endl;
    s.pop();
    s.display();
    cout<<"Using top function"<<endl;
    s.peek();
    return 0;
}




//On using pop_back() we can still access the last element using size() function of vector 

