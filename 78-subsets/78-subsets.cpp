class Solution {
public:
    
    void dfs(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        dfs(ans,temp,nums,i+1);
        temp.push_back(nums[i]);
        dfs(ans,temp,nums,i+1);
        temp.pop_back();
        return;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(ans,temp,nums,0);
        return ans;
        
    }
};