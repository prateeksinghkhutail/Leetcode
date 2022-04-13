class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        
        int val=0;
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int d=0;
        while(top<=down && left<=right)
        {
            if(d==0)
            {
                for(int i=left;i<=right;i++)
                {
                   v[top][i]=++val;
                    
                    
                }
                top++;
            }
            else if(d==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v[i][right]=++val;
                    
                    
                }
                right-=1;
            }
            else if(d==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v[down][i]=++val;
                    
                    
                }
                down-=1;
            }
            else if(d==3)
            {
                for(int i=down;i>=top;i--)
                {
                    v[i][left]=++val;
                    
                    
                }
                left+=1;
            }
            d=(d+1)%4;
        }
        return v; 
    }
};