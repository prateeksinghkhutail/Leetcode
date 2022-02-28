class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        if(nums.size()==0)
        {
            return v;
        }
        int j=1;;
        int i=0;
        while(i<nums.size())
        {
            while(j<nums.size() && nums[j]==nums[j-1]+1) ++j;
            if(i<j-1)
            {
                v.push_back(to_string(nums[i])+"->"+to_string(nums[j-1]));
            }
            else{
                v.push_back(to_string(nums[i]));
            }
            i=j;
            ++j;
        }
        return v;
    }
};