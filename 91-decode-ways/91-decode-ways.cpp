class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0)
            return 0;
        unordered_map<int,int>map;
        return solve(0,s,map);
    }
    
    int solve(int ci,string s,unordered_map<int,int>&map)
    {
        if(ci==s.length())
            return 1;
        if(s[ci]=='0')
            return 0;
        int ck=ci;
        if(map.find(ck)!=map.end())
            return map[ck];
        int ans=solve(ci+1,s,map);
        if(ci<s.length()-1 && (s[ci]=='1'||(s[ci]=='2'&&s[ci+1]<'7')))
            ans+=solve(ci+2,s,map);
        return map[ck]=ans;
    }
};