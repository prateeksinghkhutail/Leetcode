class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int prev=nums[0];
        int count=1;
        int ans=1;
       
        for(int i=1;i<n;i++){
            
            if(nums[i]==prev+1)
            {
                count++;
            }else if(nums[i]!=prev){
                
                count=1;
            }
            ans=max(ans,count);
            prev=nums[i];
        }
        return ans;
        
    }
};