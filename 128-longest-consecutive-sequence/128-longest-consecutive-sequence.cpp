class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(auto num:nums){
            if(s.find(num-1)==s.end())
            {
                int count=0;int cnum=num;
                while(s.find(cnum)!=s.end())
                {
                    count++;
                    cnum++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};