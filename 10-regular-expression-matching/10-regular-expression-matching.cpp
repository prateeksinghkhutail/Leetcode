class Solution {
public:
    bool isMatch(string s, string p) {
        unordered_map<string,int>map;
        return solve(s,p,0,0,map);   
    
    }
bool solve(string A,string B,int i,int j,unordered_map<string,int>&map)
{
    if(i>=A.size() && j>=B.size())
        return 1;
    if(j>=B.size())        
        return 0;
    
    string ck=to_string(i)+"-"+to_string(j);
    if(map.find(ck)!=map.end())
        return map[ck];
    
    
    bool match=(i<A.size() and (A[i]==B[j] or B[j]=='.'));
        

    if(j+1<B.size() and B[j+1]=='*')
    {
        return map[ck]=solve(A,B,i,j+2,map)||(match and solve(A,B,i+1,j,map));
    }
    if(match)
        return map[ck]=solve(A,B,i+1,j+1,map);
    return map[ck]=false;;
    
        

}
};