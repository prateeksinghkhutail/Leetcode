class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int, int> >>> p;
        
        for(int i=0;i<n;i++)
            p.push(make_pair(matrix[i][0],make_pair(i,0)));
        
        int ans;
        
        while(k--)
        {
            ans=p.top().first;
            int i=p.top().second.first;
            int j=p.top().second.second;
            p.pop();
            if(j!=n-1)
                 p.push(make_pair(matrix[i][j+1],make_pair(i,j+1)));
        }
        return ans;
    }
};