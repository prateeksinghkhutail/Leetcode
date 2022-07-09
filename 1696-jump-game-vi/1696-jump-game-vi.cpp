class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        int score[nums.size()];
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(q.size() && q.top().second>i+k)
            {
                q.pop();
            }
            score[i]=nums[i];
            score[i]+=(q.size()?q.top().first:0);
            q.push({score[i],i});
            
        }
        return score[0];
    }
};