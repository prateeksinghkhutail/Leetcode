class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k;
        int count=1;
         for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==nums[i-1] && count==1)
            {
               count++;

                
            }
             else if (nums[i]==nums[i-1]){
                  nums.erase(nums.begin()+i);
                    i--;
             }
             else{
                 count=1;
             }
            
        }
        k=nums.size();
        return k;
    }
};