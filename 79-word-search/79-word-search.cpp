class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0] && dfs(board,i,j,0,word,m,n))
                    return true;
                
            }
        return false;
        
    }
    
    
    bool dfs(vector<vector<char>>& board,int i,int j,int ci,string word,int m,int n)
    {
        if(ci>=word.size())
            return true;
        if(i<0||i>=m||j<0||j>=n||board[i][j]!=word[ci])
            return false;
        char temp=board[i][j];
        board[i][j]='.';
        bool found=dfs(board,i-1,j,ci+1,word,m,n)||dfs(board,i+1,j,ci+1,word,m,n)||dfs(board,i,j-1,ci+1,word,m,n)||dfs(board,i,j+1,ci+1,word,m,n);
        board[i][j]=temp;
        return found;
        
    }
};