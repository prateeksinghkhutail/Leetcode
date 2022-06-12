class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int ans=0;
        
        int m=grid.size();
        int n=grid[0].size();
        
        for(int cr=0;cr<m;cr++)
            for(int cc=0;cc<n;cc++)
            {
                if(grid[cr][cc]=='1')
                {
                    dfs(grid,cr,cc,m,n);
                    ans+=1;
                }
            }
        return ans;
    }
    
    
    void dfs(vector<vector<char>>& grid,int cr,int cc,int m,int n)
    {
        if(cr<0 || cr>=m || cc<0 || cc>=n ||grid[cr][cc]=='0')
            return;
        grid[cr][cc]='0';
        dfs(grid,cr-1,cc,m,n);
        dfs(grid,cr+1,cc,m,n);
        dfs(grid,cr,cc-1,m,n);
        dfs(grid,cr,cc+1,m,n);
        return;
        
    }
};