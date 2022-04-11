class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>v(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int newcol=(j+k)%col;
                int r=(j+k)/col;
                int newrow=(i+r)%row;
                v[newrow][newcol]=grid[i][j];
            }
        }
        return v;
    }
};