class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int>s;
        s.insert(nums.begin(),nums.end());
        int min_dev=(*s.rbegin()-*s.begin());
        int val=*s.begin();
        while(val%2==1){
            s.erase(val);
            s.insert(val*2);
            val=*s.begin();
            min_dev=min(min_dev,*s.rbegin()-val);
        }
        val=*s.rbegin();
        while(val%2==0)
        {
            s.erase(val);
            s.insert(val/2);
            val=*s.rbegin();
            min_dev=min(min_dev,val-*s.begin());
        }
        return min_dev;
        
    }
};