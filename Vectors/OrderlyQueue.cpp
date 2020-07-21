class Solution {
public:
    string orderlyQueue(string S, int K) {
        int n = S.length();
        
        if(n == 0){
            return "";
        }
        
        if(K > 1){
            sort(S.begin(),S.end());
            return S;
        }
        
        vector<string> v;
        
        for(int i=0;i<n;i++){
            
            char curr = S[0];
            S.erase(S.begin());
            S += curr;
            v.push_back(S);
            
        }
        
        sort(v.begin(),v.end());
        
        return v[0];
    }
};
//Link: https://leetcode.com/problems/orderly-queue/
