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


/*
public class Solution {
    public int removeDuplicates(int[] nums) {
    
        int i = 1; //iterator thru array
        int j = 0; //current index
        for (; i<nums.length; i++) { 
            if (nums[i] != nums[j]) { //new number
                j++; //move current index
                nums[j] = nums[i]; //fill current index with new number
            } 
        }
    return j+1;
   }
}*/