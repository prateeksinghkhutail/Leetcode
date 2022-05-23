class Solution {
public:
    vector<vector<vector<int> > >dp;
    int findMaxForm(vector<string>& strs, int m, int n) {
       dp.resize(size(strs), vector<vector<int> >(m + 1, vector<int>(n + 1,-1)));
        
        return solve(0,strs,m,n);
    }
    int solve(int ci,vector<string>& strs, int m, int n)
    {   
        
        if(ci>=strs.size())
            return 0;
        
        
	   if(dp[ci][m][n]!=-1) return dp[ci][m][n];        
        
       
        int zero=count(begin(strs[ci]),end(strs[ci]),'0');
        
        int ones=count(begin(strs[ci]),end(strs[ci]),'1');
        
        int consider=INT_MIN;
        if(m-zero>=0 && n-ones>=0)
            consider=1+solve(ci+1,strs,m-zero,n-ones);
        int notconsider=solve(ci+1,strs,m,n);
        dp[ci][m][n]=max(consider,notconsider);
        return dp[ci][m][n];
        
        
    }
};