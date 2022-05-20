class Solution {
public:

void dfs(int par , int node ,int *timme ,vector<vector<int>>& adj , vector< vector<int> >& ans , vector<int> &inTime , vector<int> &lowestAdjInTime , vector<int> &vis )
{
    lowestAdjInTime[node] = inTime[node] = ++(*timme);
    vis[node]=1;
    
    int n = adj[node].size();
    int minTime = inTime[node];
    
    for(int i=0 ; i<n ; i++)
    {
        if(!vis[adj[node][i]])
            dfs(node,adj[node][i],timme,adj,ans,inTime,lowestAdjInTime,vis);
        
        if(adj[node][i] != par) minTime = min(minTime,lowestAdjInTime[ adj[node][i] ]);
    }
    
    if(par==-1) return;
    
    if(minTime > inTime[par])
    {
        ans.push_back({par,node});
        lowestAdjInTime[node] = inTime[par];
    }
    else lowestAdjInTime[node] = minTime;
    
}


vector<vector<int>> criticalConnections(int n, vector<vector<int>>& conn) 
{
    vector< vector<int> >adj(n);
    
    int len = conn.size();
    
    for(int i=0 ; i<len ; i++)
    {
        adj[conn[i][0]].push_back(conn[i][1]);
        adj[conn[i][1]].push_back(conn[i][0]);
    }
    
    int timme = 0;
    vector<int> inTime(n) , vis(n,0);
    vector<int> lowestAdjInTime(n);
    vector< vector<int> > ans;
    
    dfs(-1,0,&timme,adj,ans,inTime,lowestAdjInTime,vis);
    
    return ans;
}
};