class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int s=nums.size();
        int mini[s];
        mini[0]=nums[0];
        for(int i=1;i<s;i++)
        {
            mini[i]=min(mini[i-1],nums[i]);
        }
        
        stack<int>st;
        for(int j=s-1;j>=0;--j)
        {
            while(!st.empty() && st.top()<=mini[j])
            {
                st.pop();
            }
            if(!st.empty() && st.top()<nums[j])
                return true;
            st.push(nums[j]);
        }
        return false;
    }
};