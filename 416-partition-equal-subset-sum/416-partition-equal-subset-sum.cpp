class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int tsum=0;
        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
        }
        if(tsum%2!=0)
        {
            return false;
        }
        unordered_map<string,bool>map;
        return checksubset(nums,tsum/2,0,map);
    }
    
    bool checksubset(vector<int>& nums,int tsum,int ci,unordered_map<string,bool>&map)
    {
        if(tsum==0)
        {
            return true;
        }
        
        if(ci>=nums.size())
        {
            return false;
        }
        
        int cnum=nums[ci];
        string ck=to_string(ci)+"-"+to_string(tsum);
        bool consider=false;
        if(map.find(ck)!=map.end())
        {
            return map[ck];
        }
        
        if(cnum<=tsum)
        {
            consider=checksubset(nums,tsum-cnum,ci+1,map);
        }
        if(consider)
        {
            map[ck]=consider;
            return true;
        }
        bool notconsider=checksubset(nums,tsum,ci+1,map);
        map[ck]=consider||notconsider;
        return map[ck];
    }
    
    
    
};