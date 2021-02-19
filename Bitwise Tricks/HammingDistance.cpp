class Solution {
public:
    int hammingDistance(int x, int y) {
         int xxory= x^y;
        int count=0;
        while(xxory)
        {
            count+=(xxory & 1);
            xxory= xxory>>1;
        }
        
        return count;
    }
};
