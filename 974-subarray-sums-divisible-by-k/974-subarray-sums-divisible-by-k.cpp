class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>map;
        map[0]=1;
        int prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            int crem=((prefix%k)+k)%k;
            if(map.find(crem)!=map.end())
            {
                ans+=map[crem];
                map[crem]++;
                
            }
           
            else{
                map[crem]=1;
            }
        }
        return ans;
    }
};