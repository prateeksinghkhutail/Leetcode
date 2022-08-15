class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int first=firstpos(nums,target);
        if(first==-1)
            return v;
        int second=lastpos(nums,target);
        for(int i=first;i<=second;i++)
            v.push_back(i);
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