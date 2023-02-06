class Solution {
public:

    bool dfs(vector<vector<char>>& board, string word,int n,int m,int i,int j,int ind)
    {
        if(ind==word.size())return true;
        if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[ind])return false;

        char temp=board[i][j];
        board[i][j]='.';
        
        bool found=dfs(board,word,n,m,i-1,j,ind+1)||dfs(board,word,n,m,i+1,j,ind+1)||
        dfs(board,word,n,m,i,j-1,ind+1)||dfs(board,word,n,m,i,j+1,ind+1);
        board[i][j]=temp;
        return found;


    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0]&&dfs(board,word,n,m,i,j,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};