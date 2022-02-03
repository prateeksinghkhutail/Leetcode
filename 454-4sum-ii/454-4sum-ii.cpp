class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        int count=0;
        unordered_map<int,int>m;
        int n=nums1.size();
        
        
        
        //creating a map of frequencies of sum of first two arrays
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=nums1[i]+nums2[j];
                m[sum]++;
                
            }
            
        }
        
        
        //checking if the negative of sum of nums3,nums4 is present in the map;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                int sum2=0-(nums3[i]+nums4[j]);
                if(m.find(sum2)!=m.end())
                {
                    count+=m[sum2];
                }
                
            }
        }
        return count;
        
        
        
        
    }
};