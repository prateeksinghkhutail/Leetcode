class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix=0;
        int ans=0;
        unordered_map<int,int>map;
        map[0]=1;
        
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            if(map.find(prefix-k)!=map.end())
            {
                ans+=map[prefix-k];
                
                
            }
            if(map.find(prefix)!=map.end())
            {
                map[prefix]++;
            }
            else{
                map[prefix]=1;
            }
        }
        return ans;
    }
};