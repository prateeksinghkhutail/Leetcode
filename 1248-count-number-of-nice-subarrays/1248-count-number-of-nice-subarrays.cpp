class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int j=0;int count=0;int odd=0;int total=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1)
            {
                odd++;
                if(odd>=k)
                {
                    count=1;
                    while(!(nums[j++]&1))count++;
                    total+=count;
                }
            }
            else if(odd>=k)total+=count;
        }
        return total;
    }
};