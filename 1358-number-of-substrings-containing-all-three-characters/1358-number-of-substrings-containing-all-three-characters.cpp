class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int end=n-1;
        int release=0;
        int count=0;
        unordered_map<int,int>map;
        
        for(int i=0;i<n;i++)
        {
            map[s[i]]++;
            while(map['a']>=1 && map['b']>=1 && map['c']>=1)
            {
                count+=end-i+1;
                map[s[release]]--;
                release++;
                
                
            }
            
        }
        return count;
        
    }
};