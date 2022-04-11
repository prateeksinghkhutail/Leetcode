class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tsum=0;
        int n=nums.size();
        for(int i=0;i<=n;i++)
            tsum+=i;
        int csum=0;
        for(int i=0;i<n;i++)
            csum+=nums[i];
            
        return tsum-csum;
    }
};