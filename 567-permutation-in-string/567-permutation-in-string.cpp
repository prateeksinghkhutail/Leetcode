class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>m(26,0);
        vector<int>m2(26,0);
        if(s1.length()>s2.length())return false;
        for(int i=0;i<s1.length();i++)
        {
            m[s1[i]-'a']++;
            m2[s2[i]-'a']++;
        }
        if(m == m2) return true;
        for(int i=s1.length();i<s2.length();i++)
        {
            m2[s2[i-s1.length()]-'a']--;
            m2[s2[i]-'a']++;
            if(m == m2)
                return true;
        }
        return false;
        
    }
};