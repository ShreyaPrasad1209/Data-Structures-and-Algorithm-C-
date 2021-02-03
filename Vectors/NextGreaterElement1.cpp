class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>st;
        for(int i=0;i<nums2.size();i++)
        {
            while(!st.empty() && st.top()<nums2[i])
            {
                m[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
              nums1[i]=m[nums1[i]];  
            }
            else
            {
                 nums1[i]=-1;
            }
        }
        return nums1;
    }
};
