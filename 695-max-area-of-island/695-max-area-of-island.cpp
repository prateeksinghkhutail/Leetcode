class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans=0;
        for(int curr_row=0;curr_row<m;curr_row++)
        {
            for(int curr_col=0;curr_col<n;curr_col++)
            {
                if(grid[curr_row][curr_col]==1){
                    //ans+=1;
                    ans = max(ans,sinkIsland(grid,curr_row,curr_col,m,n));
                }
            }
        }
        return ans;
    }
    int sinkIsland(vector<vector<int>>& grid,int curr_row,int curr_col,int m,int n)
     {
         if(curr_row<0 || curr_row>=m || curr_col<0 || curr_col>=n || grid[curr_row][curr_col]== 0)
            return 0;
         grid[curr_row][curr_col]=0;
         // up move
        int a = sinkIsland(grid,curr_row-1,curr_col,m,n);
        //right move
        int b = sinkIsland(grid,curr_row,curr_col+1,m,n);
        //down move
        int c = sinkIsland(grid,curr_row+1,curr_col,m,n);
        //left move
        int d = sinkIsland(grid,curr_row,curr_col-1,m,n);
        return (1+a+b+c+d);
     }
};