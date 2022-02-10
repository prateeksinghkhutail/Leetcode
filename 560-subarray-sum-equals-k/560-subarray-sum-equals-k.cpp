class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        int n=nums.size();
        map<int,int>m; //map to store the frequency of prefix sum of array
        int count=0;
        int pre=0; //prefix sum
        for(int i=0;i<n;i++)
        {
            pre+=nums[i];
            if(pre==k)count++;  
            if(m.find(pre-k)!=m.end())  //if we find pre-k in map that means that subarray have sum k; 
                count+=m[pre-k];   //counting the occurrence of pre-k 
            m[pre]++;  //adding the prefix sum to map
        }
        return count;
    }
};