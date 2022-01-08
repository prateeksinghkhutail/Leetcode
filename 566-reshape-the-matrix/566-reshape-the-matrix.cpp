class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        int x=0;int y=0;
        if(n*m!=r*c)
        {
            return mat;
        }
        vector<vector<int>>v(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                v[i][j]=mat[x][y];
                y++;
                if(y==m)
                {
                    y=0;
                    x++;
                }
            }
        }
        return v;
    }
};