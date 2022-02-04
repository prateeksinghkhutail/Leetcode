class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        int count=0;
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)count=count-1;
            else count+=1;
            if(count==0)maxlen=max(maxlen,i+1);
            if(m.find(count)!=m.end())
            {
                maxlen=max(maxlen,i-m[count]);
            }
            else{m[count]=i;}
        }
        return maxlen;
    }
};