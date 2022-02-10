class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force solution
        //first for loop for all possible subarray length
        int n=nums.size();
        map<int,int>m;
        int count=0;
        int pre=0;
        for(int i=0;i<n;i++)
        {
            pre+=nums[i];
            if(pre==k)count++;
            if(m.find(pre-k)!=m.end())
                count+=m[pre-k];
            m[pre]++;
        }
        return count;
    }
};