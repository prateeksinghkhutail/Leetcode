class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i==0||(i>0 && nums[i]!=nums[i-1]))
            {
            int target=0-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==target)
                {
                    vector<int>t;
                    t.push_back(nums[i]);
                    t.push_back(nums[j]);
                    t.push_back(nums[k]);
                    
                    v.push_back(t);
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]<target)
                {
                    j++;

                }
                else{k--;}
            }
            
            }
        
        }
        return v;
        }
};