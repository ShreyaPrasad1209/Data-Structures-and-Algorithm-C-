class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        string res= bitset<32>(n).to_string();
        
        reverse(res.begin(), res.end());
        
        uint32_t decimal =bitset<32>(res).to_ulong();
        
        return decimal;
    }
};
