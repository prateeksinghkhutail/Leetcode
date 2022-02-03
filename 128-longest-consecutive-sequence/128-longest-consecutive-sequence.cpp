class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int>s;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)!=s.end())
            {
                continue;
            }
            else{
                int count=0;
                int x=nums[i];
                while(s.find(x)!=s.end())
                {
                    count++;
                    x++;
                }
                ans=max(ans,count);
                
                
            }
        }
        return ans;
        
    }
};