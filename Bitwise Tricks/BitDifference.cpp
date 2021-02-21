#define mod 1000000007
class Solution{
public:
    int countBits(int N, long long int A[])
    {
        long ans=0;
    
      for(int i=0;i<32;i++)
      {
          long countOn=0;
          
          for(long j=0;j<N;j++)
          {
              if(A[j] & (1<<i))
              {
                  countOn++;
              }
          }
          
          ans+=countOn*(N-countOn)*2;
         
      }
   
       return ans%mod;
    }
};

//Link: https://www.geeksforgeeks.org/sum-of-bit-differences-among-all-pairs/
