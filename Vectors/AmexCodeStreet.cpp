// You are given two numbers L and R. Find the value of g(L,R). 
//g(L,R)=f(L)+ f(L+1) + f(L+2) + .... f(R)
// where f(x) is the smallest fibonnaci number which is greater than or equal to x
//Constraint: 1<=L<R<=10^9
//Example: L=2, R=5
// ans=f(2)+f(3)+f(4)+f(5)=2+3+5+5=15.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fb(int R, vector<int>& fs)
{
    fs[0]=0; fs[1]=1;
    for(int i=2;i<=R;i++)
    {
        fs[i]=fs[i-1]+fs[i-2];
    }
}
int main()
{
    int L,R,sum=0;
    cout<<"Enter L and R"<<endl;
    cin>>L>>R;
    vector<int>fs(R+2);
    fb(R,fs); 
    for(int i=L;i<=R;i++)
    {
        auto it=lower_bound(fs.begin(),fs.end(),i);
        sum+=fs[it-fs.begin()];
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}

