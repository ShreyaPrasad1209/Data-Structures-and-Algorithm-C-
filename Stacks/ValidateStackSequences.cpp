class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0, n=pushed.size();
        stack<int>st;
        for(int num: pushed)
        {
            st.push(num);
            while(!st.empty() && st.top()==popped[i])
            {
                st.pop(); 
                ++i;
            }
        }
        
        return i==n;
    }
};
