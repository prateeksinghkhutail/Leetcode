class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int>map;
        return maxMoney(nums,0,map);
    }
    
    int maxMoney(vector<int>&nums,int ci,unordered_map<int,int>&map)
    {
        if(ci>=nums.size())
            return 0;
        
        int ck=ci;
        if(map.find(ck)!=map.end())
            return map[ck];
        int rob=nums[ci]+maxMoney(nums,ci+2,map);
        int norob=maxMoney(nums,ci+1,map);
        map[ck]=max(rob,norob);
        return map[ck];
    }
};