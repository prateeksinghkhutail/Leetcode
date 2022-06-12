class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int n=isConnected.size();
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {    dfs(isConnected,n,visited,i);
                 ans+=1;
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<int>>& isConnected,int n,vector<bool>&visited,int cv)
    {
        if(visited[cv])
            return;
        visited[cv]=true;
        auto neighbours=isConnected[cv];
        for(int i=0;i<n;i++)
        {
            if(neighbours[i]==1)
                dfs(isConnected,n,visited,i);
        }
        return;
    }
    
    
};