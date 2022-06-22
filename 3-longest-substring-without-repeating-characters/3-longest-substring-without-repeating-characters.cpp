class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int release=0;
        unordered_map<char,int>map;
        
        for(int i=0;i<s.size();i++)
        {
            char cc=s[i];
            if(map.find(cc)!=map.end() && map[cc]>=release)
            {
                 release=map[cc]+1;
            }
            map[cc]=i;
            ans=max(ans,i-release+1);
        }
        return ans;
    }
};