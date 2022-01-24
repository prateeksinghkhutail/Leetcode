class Solution {
public:
    
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    
    
    void nextPermutation(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        for(i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
                break;
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
           
        }
        else{
        int smallest=i;
        int x=nums[i-1];
        for(j=i+1;j<n;j++)
        {
            if(nums[j]>x&&nums[j]<nums[smallest])
                smallest=j;
        }
        swap(&nums[i-1],&nums[smallest]);
        sort(nums.begin()+i,nums.end());
        }
        
    
        
    }
};