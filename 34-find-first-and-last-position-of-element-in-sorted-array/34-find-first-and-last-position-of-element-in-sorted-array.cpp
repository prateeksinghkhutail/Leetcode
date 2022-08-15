class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        
        v.push_back(firstpos(nums,target));
        v.push_back(lastpos(nums,target));
        return v;
    }
    
    int firstpos(vector<int>&nums,int target)
    {
        int ans=-1;
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                end=mid-1;
                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
    
      int lastpos(vector<int>&nums,int target)
    {
        int ans=-1;
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                start=mid+1;
                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};