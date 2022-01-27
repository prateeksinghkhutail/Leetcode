class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int j=0;
        int i=0;
        while(true)
        {
            i=nums[i];
            j=nums[nums[j]];
            if(i==j) break;
        }
        
        
        int k=0;
        while(true)
        {
            k=nums[k];
            i=nums[i];
            if(i==k) break;
        }
        return i;
    }
};