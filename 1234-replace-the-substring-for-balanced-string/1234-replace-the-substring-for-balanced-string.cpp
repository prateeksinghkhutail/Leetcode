class Solution {
public:
    int balancedString(string s) {
        unordered_map<int,int>map;
        int n=s.length();
        for(auto c:s)
        {
            map[c]++;
        }
        
        int ans=n;
        int release=0;
        int need=n/4;
        for(int i=0;i<n;i++)
        {
            map[s[i]]--;
            while(map['Q'] <= need && map['W'] <= need && map['E'] <= need && map['R'] <= need && release<n )
            {
                ans=min(ans,i-release+1);
                map[s[release]]++;
                release++;
            }
            
        }
        return ans;
        
    }
};