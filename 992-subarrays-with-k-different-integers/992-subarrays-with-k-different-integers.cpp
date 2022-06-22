class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (solve(nums,k)-solve(nums,k-1));
        
    }
    
    int solve(vector<int>&nums,int k)
    {
        int ans=0;
        int distinct=0;
        int release=0;
        unordered_map<int,int>memo;
        
        for(int i=0;i<nums.size();i++)
        {
            int cn=nums[i];
            if(memo.find(cn)!=memo.end())
            {
                memo[cn]++;
            }
            else
            {
                memo[cn]=1;
                distinct++;
            }
            
            while(release<=i && distinct>k)
            {
                int dn=nums[release];
                memo[dn]--;
                release++;
                if(memo[dn]==0)
                {
                    memo.erase(dn);
                    distinct--;
                    
                }
            }
            
            ans+=i-release+1;
            
            
        }
        return ans;
    }
};
    
