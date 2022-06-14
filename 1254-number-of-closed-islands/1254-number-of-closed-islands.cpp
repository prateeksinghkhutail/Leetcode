class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int cc=0;cc<n;cc++)
        {
            if(grid[0][cc]==0)
                dfs(grid,0,cc,m,n);
            if(grid[m-1][cc]==0)
                dfs(grid,m-1,cc,m,n);
            
        }
        for(int cr=0;cr<m;cr++)
        {
            if(grid[cr][0]==0)
                dfs(grid,cr,0,m,n);
            
            if(grid[cr][n-1]==0)
                dfs(grid,cr,n-1,m,n);
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {    dfs(grid,i,j,m,n);
                    ans+=1;
                }
            }
        }
        
        return ans;
    }
    
    
    
    void dfs(vector<vector<int>>& grid,int cr,int cc,int m,int n)
    {
        if(cr<0||cr>=m||cc<0||cc>=n||grid[cr][cc]==1)
            return;
        
        grid[cr][cc]=1;
        dfs(grid,cr-1,cc,m,n);
        dfs(grid,cr+1,cc,m,n);
        dfs(grid,cr,cc-1,m,n);
        dfs(grid,cr,cc+1,m,n);
        return;
    }
    
    
    
};