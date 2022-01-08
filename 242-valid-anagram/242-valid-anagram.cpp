class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(auto it:s)
        {
            m1[it]++;
        }
         for(auto it:t)
        {
            m2[it]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]]!=m2[s[i]])
                return false;
        }
        return true;
    }
};