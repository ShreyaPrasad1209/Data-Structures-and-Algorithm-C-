/******************************************************************************

Queue implementation using Vector

*******************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> q;

 void push(int d){
   q.insert(q.end(),d);
 }

 void pop(){
 q.erase(q.begin());
 }

 int front(){
 return *q.begin();
 }

 int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    cout<<front()<<endl;
     for(int i=0;i<q.size();i++) cout<<q[i]<<" ";
  }
