class Solution {
public:
    
void twoSum(vector<vector<int>> &result, vector<int> nums, int i, int j, int n, int target){
        
        int left = j+1;
        int right = n-1;
        
        while(left<right)
        {
            if(nums[left]+nums[right]>target)
            {
                right--;
            }
            else if(nums[left]+nums[right]<target)
            {
                left++;

            }
            else
            {
                result.push_back({nums[i],nums[j],nums[left],nums[right]});
                
                
                while(left<n-1 && nums[left]==nums[left+1])
                {
                    left++;
                }
                while(right>0 && nums[right]==nums[right-1])
                {
                    right--;
                }
                left++;
                right--;
            }
                
        }
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
         sort(nums.begin(),nums.end());
        
        int n= nums.size();
        vector<vector<int>> result;
        
        if(n<4)
        {
            return result;
        }
     
        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    continue;
                    
                }
                
                int subtarget = target - (nums[i]+nums[j]);
                twoSum(result,nums, i, j, n, subtarget);
                
                
            }
           
        }
         return result;

        
    }
};

//Link- https://leetcode.com/problems/4sum/
