class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int down=m-1;
        int left=0;
        int right=n-1;
        int d=0;
        while(top<=down && left<=right)
        {
            if(d==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                    
                    
                }
                top++;
            }
            else if(d==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v.push_back(matrix[i][right]);
                    
                    
                }
                right-=1;
            }
            else if(d==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                    
                    
                }
                down-=1;
            }
            else if(d==3)
            {
                for(int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                    
                    
                }
                left+=1;
            }
            d=(d+1)%4;
        }
        return v;
    }
};