class Solution {
public:
    vector<vector<int>> dp;

    int lengthOfLIS(vector<int>& nums) {
      
        dp.resize(size(nums), vector<int>(1+size(nums), -1)); 
        return solve(nums,0,-1);
    }
    
    int solve(const vector<int> &nums,int ci,int last)
    {
    
    if(ci>=nums.size()) return 0;
   
    if(dp[ci][last+1] != -1) return dp[ci][last+1];
    int consider=0;
    int notconsider=solve(nums,ci+1,last);
    if(last==-1 || nums[ci]>nums[last])
    {
        
        consider=1+solve(nums,ci+1,ci);
    }
   
    
        return dp[ci][last+1] =max(consider,notconsider);
    }
};