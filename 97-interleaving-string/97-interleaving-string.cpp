class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        unordered_map<string,int>map;
        return solve(s1,s2,s3,0,0,0,map);
    }
    
    bool solve(string s1, string s2, string s3,int i,int j,int k,unordered_map<string,int>&map)
    {
        if(i>=s1.length()&&j>=s2.length() && k>=s3.length())
            return 1;
        if(i>=s1.length()&&s3[k]!=s2[j] || j>=s2.length()&&s3[k]!=s1[i] )
            return 0;
        bool ans=0;
        string ck=to_string(i)+"-"+to_string(j)+"-"+to_string(k);
        if(map.find(ck)!=map.end())
        {
            return map[ck];
        }
        if(s1[i]==s3[k])
            ans=ans||solve(s1,s2,s3,i+1,j,k+1,map);
        if(s2[j]==s3[k])
            ans=ans||solve(s1,s2,s3,i,j+1,k+1,map);
        return map[ck]=ans;
        
    }
};