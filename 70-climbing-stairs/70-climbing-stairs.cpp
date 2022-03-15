class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>map;
        return totalways(0,n,map);
    }
    
    
    int totalways(int cs,int ts,unordered_map<int,int>&map)
    {
        if(cs==ts)
            return 1;
        if(cs>ts)
            return 0;
        
        int ck=cs;
        if(map.find(ck)!=map.end())
            return map[ck];
        
        int onejump=totalways(cs+1,ts,map);
        int twojump=totalways(cs+2,ts,map);
        map[ck]=onejump+twojump;
        return onejump+twojump;
    }
};