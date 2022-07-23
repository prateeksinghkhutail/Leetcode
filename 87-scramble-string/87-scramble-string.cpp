class Solution {
public:
    bool isScramble(string s1, string s2) {
         unordered_map<string,bool>map;
    return solve(s1,s2,map);
    }
    
    bool solve(string s1, string s2,unordered_map<string,bool>&map)
{
    if(s1.size()==1)
    {
        return s1==s2;
    }
    if(s1==s2)
    {
        return true;
    }
    string ck=s1+"-"+s2;
    if(map.find(ck)!=map.end())
        return map[ck];
    vector<int>f1(26),f2(26);
    for(int i=0;i<s1.size();i++)
    {
        f1[s1[i]-'a']++;
        f2[s2[i]-'a']++;
    }
    if(f1!=f2)
        return map[ck]=false;
    bool res=false;
    int n=s1.size();
    for(int i=1;i<n;i++)
    {
        if(solve(s1.substr(0,i),s2.substr(0,i),map) and solve(s1.substr(i),s2.substr(i),map) or
            solve(s1.substr(0,i),s2.substr(n-i),map) and solve(s1.substr(i),s2.substr(0,n-i),map)
        )
        {
            return map[ck]=true;
        }
        
    }
    return map[ck]=false;
    
    
    
}
    
    
    
    
    
};