  // How to set nth position in number ‘num’ : Observations: It adds num by 2 
     
     void set(int & num,int n) 
{    
     int shift = 1<< n;  // First step is shift '1', 
     num = num | shift ;  // second  step is bitwise OR 
} 



// How to unset/clear a bit at n’th position in the number ‘num’. Observation: It subtracts num by 2.

    void unset(int & num,int n) 
{ 
     // First step is shift '1', second 
     // step is bitwise OR 
     int shift = 1<< n;
     num = num & (~shift) ; 
}

// First step is to shift 1,Second step is to XOR with given number 
void toggle(int &num,int n) 
{ 
    num ^= (1 << n); 
} 


void rightmostbitmask(int n)
{
    int rmb = n & ~(n-1);
    //OR
     int rmb= n & -n ; 
    cout<<n; 
}

int countSetBits(int n)
{
  //Method 1
  bitset<16> b1(n);
  cout<<"Number of set bits are"<< b1.count();<<endl;
  
   //Method 2
   cout<<__builtin_popcount(n)<<endl;
   
  //Method 3
  int count=0;
  while(n)
  {
    count+= n&1;
    n=n>>1;
  }
    return count;
}
