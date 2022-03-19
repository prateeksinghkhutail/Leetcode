class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int>map;
        return totalways(nums,0,target,map);
    }
    
    int totalways(vector<int>& nums,int ci,int t,unordered_map<string,int>&map)
    {
        if(ci==nums.size() && t==0)
            return 1;
        if(ci==nums.size() && t!=0)
            return 0;
        string ck=to_string(ci)+"-"+to_string(t);
        
        if(map.find(ck)!=map.end())
            return map[ck];
        
        int possign=totalways(nums,ci+1,t-nums[ci],map);
        int negsign=totalways(nums,ci+1,t+nums[ci],map);
        map[ck]=possign+negsign;
        return map[ck];
        
    }
};