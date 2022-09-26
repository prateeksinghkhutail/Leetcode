class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int r=0;
        int ans=INT_MAX;int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                sum-=nums[r];
               
                ans=min(ans,i-r+1);
                r++;
                
                
            }
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};