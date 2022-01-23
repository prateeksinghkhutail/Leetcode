class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
    int n = nums.size();
    int lsum[n];
    int rsum[n];
    lsum[0]=nums[0];
    rsum[n-1]=nums[n-1];
    for(int i=1;i<n;i++)
    {
        lsum[i]=nums[i]+lsum[i-1];
    }
        
    for(int i=n-2;i>=0;i--)
    {
        rsum[i]=nums[i]+rsum[i+1];
    }

    for(int i=0;i<n;i++)
    {
    	if(lsum[i]==rsum[i])
    	{
    		return i;
    	}
    }
    return -1;
        
        
    }
};