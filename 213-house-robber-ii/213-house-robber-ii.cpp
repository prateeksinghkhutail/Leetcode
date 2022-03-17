class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        unordered_map<int,int>map;
        unordered_map<int,int>map2;
        
        return max(maxmoney0(nums,0,map),maxmoney1(nums,1,map2));
    }
    
    int maxmoney0(vector<int>&nums,int ci,unordered_map<int,int>&map)
    {
        if(ci>=nums.size()-1)
            return 0;
        
        int ck=ci;
        if(map.find(ck)!=map.end())
            return map[ck];
        int rob=nums[ci]+maxmoney0(nums,ci+2,map);
        int norob=maxmoney0(nums,ci+1,map);
        map[ck]=max(rob,norob);
        return map[ck];
    }
    int maxmoney1(vector<int>&nums,int ci,unordered_map<int,int>&map2)
    {
        if(ci>=nums.size())
            return 0;
        
        int ck=ci;
        if(map2.find(ck)!=map2.end())
            return map2[ck];
        int rob=nums[ci]+maxmoney1(nums,ci+2,map2);
        int norob=maxmoney1(nums,ci+1,map2);
        map2[ck]=max(rob,norob);
        return map2[ck];
    }
    
};