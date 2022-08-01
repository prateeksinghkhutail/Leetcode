class Solution {
public:
    int uniquePaths(int m, int n) {
        unordered_map<string,int>map;
        return solve(m,n,0,0,map);
    }
    
    int solve(int m, int n,int cr, int cl,unordered_map<string,int>&map)
    {
        if(cr==m-1 && cl==n-1)
            return 1;
        if(cr>=m || cl>=n)
            return 0;
        string ck=to_string(cr)+"-"+to_string(cl);
        if(map.find(ck)!=map.end())
            return map[ck];
        
        int right=solve(m,n,cr,cl+1,map);
        int down=solve(m,n,cr+1,cl,map);
        return map[ck]=right+down;
        
    }
};