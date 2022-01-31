class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        if(nums.empty())return v;
        for(int i=0;i<n-3;i++)
        {
            int target1=target-nums[i];
            for(int j=i+1;j<n-2;j++)
            {
                int target2=target1-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back)
                {
                    int sum=nums[front]+nums[back];
                    if(sum<target2)front++;
                    else if(nums[front]+nums[back]==target2) {
                        vector<int> q(4, 0);
                        q[0] = nums[i];
                        q[1] = nums[j];
                        q[2] = nums[front];
                        q[3] = nums[back];
                        v.push_back(q);
                        while (front < back && nums[front] == q[2]) ++front;
                        while (front < back && nums[back] == q[3]) --back;
                    }
                    else back--;
                }
                 while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
              while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return v;
    }
};