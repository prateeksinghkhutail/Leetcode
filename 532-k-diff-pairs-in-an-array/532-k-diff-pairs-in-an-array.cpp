class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        set<int>s;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            s.insert(nums[i]);
        }
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            if(k>0 && m.find((*it)+k)!=m.end()|| k==0 && m[(*it)]>1)
            {
                count++;
            }
        }
        return count;
       
    }
};
