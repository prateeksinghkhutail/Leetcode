class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k;
	 
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==nums[i-1])
            {
                nums.erase(nums.begin()+i);
                i--;

                
            }
            
        }
         k=nums.size();
       	
       	
        return k;
    }
};