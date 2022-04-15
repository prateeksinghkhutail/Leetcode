class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer=0;
        int release=0;
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++)
        {
            
           // while(release<i && map.find(s[i])!=map.end())
           // {
                
           //     map.erase(s[release]);
           //     release+=1;
                
           //}
            
            if(map.find(s[i])!=map.end() && map[s[i]]>=release)
                release=map[s[i]]+1;
            map[s[i]]=i;
            answer=max(answer,i-release+1);
            
            
            
        }
        return answer;
    }
};