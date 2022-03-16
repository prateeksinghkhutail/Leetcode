class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>map;
        return min(minCost(cost,0,map),minCost(cost,1,map));
    }
    
    int minCost(vector<int>&cost,int ci,unordered_map<int,int>&map)
    {
        if(ci==cost.size())
            return 0;
        if(ci>cost.size())
            return 1001;
        
        int ck=ci;
        if(map.find(ck)!=map.end())
            return map[ck];
        
        int oj=cost[ci]+minCost(cost,ci+1,map);
        int tj=cost[ci]+minCost(cost,ci+2,map);
        map[ck]=min(oj,tj);
        return map[ck];
    }
};