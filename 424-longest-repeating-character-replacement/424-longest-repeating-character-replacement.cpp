class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int maxf=0;
        int release=0;
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            map[ch]++;
            maxf=max(maxf,map[ch]);
            while((i-release+1-maxf)>k)
            {
                char discard=s[release];
                map[discard]--;
                release++;
                
            }
            ans=max(ans,i-release+1);
            
        }
        return ans;
        
    }
};