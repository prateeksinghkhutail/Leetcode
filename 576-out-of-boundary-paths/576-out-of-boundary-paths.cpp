class Solution {
public:
    const int mod=1000000007;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        unordered_map<string,int>map;
        return solve(m,n,maxMove,startRow,startColumn,map,0);
    }
    
    int solve(int m,int n,int maxMove,int row,int col,unordered_map<string,int>&map,int move)
    {
        if(move>maxMove)
            return 0;
        if((row<0 || row>=m || col<0 || col>=n) && (maxMove>=0) )
            return 1;
        
        string ck=to_string(row)+" "+to_string(col)+" "+to_string(move);
        
        if(map.find(ck)!=map.end())
            return map[ck];
        
        long long int down=solve(m,n,maxMove,row+1,col,map,move+1)%mod;
        long long int top=solve(m,n,maxMove,row-1,col,map,move+1)%mod;
        long long int right=solve(m,n,maxMove,row,col+1,map,move+1)%mod;
        long long int left=solve(m,n,maxMove,row,col-1,map,move+1)%mod;
        
        return map[ck]=(down+left+top+right)%mod;
        
        
        
        
        
    }
    
};