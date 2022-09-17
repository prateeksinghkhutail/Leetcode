class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string,int>map;
        int count=0;
        for(auto i:nums)
        {
            map[i]++;
            
        }
        
        for(auto p:nums)
        {
            if(p==target.substr(0,p.length()))
            {
                string s=target.substr(p.length());
                if(map.find(s)!=map.end())
                {
                    count+=(p==s?map[s]-1:map[s]);
                }
            }
        }
        return count;
    }
};