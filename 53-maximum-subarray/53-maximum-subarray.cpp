class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cmax=nums[0];
        int gmax=nums[0];
        
        for(int i=1;i<n;i++)
        {
            cmax=max(nums[i],nums[i]+cmax);
            if(cmax>gmax)
                gmax=cmax;
            
        }
        return gmax;
    }
};