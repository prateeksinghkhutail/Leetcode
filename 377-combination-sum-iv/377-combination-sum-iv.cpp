class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        unordered_map<string,int>map;
        
        return solve(nums,target,map);
    }
    
    int solve(vector<int>& nums,int target,unordered_map<string,int>&map)
    {
        if(target==0)
            return 1;
        
        
        string ck=to_string(target);
        if(map.find(ck)!=map.end())
            return map[ck];
        int consider=0;
        for(auto num:nums)
        {
            if(num<=target)
            {
                consider+=solve(nums,target-num,map);
            }
     
        }
        return map[ck]=consider;
    }
};