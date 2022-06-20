class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)
        {
            if(i==0||(i>0 and nums[i-1]!=nums[i]))
            {
                int target=0-nums[i];
                int first=i+1;
                int last=n-1;
            
                while(first<last)
                {
                    int sum=nums[first]+nums[last];
                    
                    if(sum>target)
                        last--;
                
                    else if(sum<target)
                        first++;
                
                    else
                    {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[first]);
                        v.push_back(nums[last]);
                        ans.push_back(v);
                        while(first<last and nums[first+1]==nums[first])first++;
                        while(first<last and nums[last-1]==nums[last])last--;
                        first++;
                        last--;
                    
                    
                     }
                 }
                   
            }
        }
        return ans;
    }
};