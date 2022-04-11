class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                nums[i]=abs(nums[i]);
        }
        vector<int>v(nums.size());
        int i=0;
        int j=nums.size()-1;
        int k=j;
        while(i<=j)
        {
            if(nums[i]>nums[j])
            {
             v[k]=nums[i]*nums[i];
                k--;
                i++;
            }
            else{
                v[k]=nums[j]*nums[j];
                k--;
                j--;
            }
        }
        return v;
        
        
    }
};