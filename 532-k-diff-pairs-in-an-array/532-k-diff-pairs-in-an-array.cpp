class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        set<int>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int t=i+1;
            int key=nums[i]+k;
            if(binary_search(nums.begin()+t,nums.end(),key)>0)
            {
                s.insert(nums[i]);
            }
                
        }
        return s.size();
       
    }
};