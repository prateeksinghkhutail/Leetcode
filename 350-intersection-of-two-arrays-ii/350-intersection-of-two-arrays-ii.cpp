class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>m;
        vector<int>v;
        for(auto num:nums1)
        {
            m[num]++;
        }
        for(auto it:nums2)
        {
            if(m[it]>0)
            {
                v.push_back(it);
                m[it]--;
            }
        }
        return v;
    }
};