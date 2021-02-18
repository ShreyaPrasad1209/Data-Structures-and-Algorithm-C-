#include<bits/stdc++.h>
using namespace std;


int copySetBitsInRange(int x, int y,int l,int r)
{
    for(int i=l;i<=r;i++)
    {
        int setBit = 1<<i-1;
        if(y & setBit)
        {
            x|=setBit;
        }
       
    }
    
    return x;
}

int main()
{
    int x,y,l,r;
    std::cout << "Enter values of x and y" << std::endl;
    cin>>x>>y;
    std::cout <<"Enter values of l and r" << std::endl;
    cin>>l>>r;
    cout<<copySetBitsInRange(x,y,l,r);
    return 0;
}
