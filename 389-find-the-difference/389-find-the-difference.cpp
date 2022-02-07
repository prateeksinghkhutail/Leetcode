class Solution {
public:
    char findTheDifference(string s, string t) {
        map<int,int>m;
        char ans;
        for(int i=0;i<s.size();i++)
        {

             m[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(m.find(t[i])!=m.end() && m[t[i]]>=1)
                m[t[i]]--;
            else { ans=t[i]; break;}
        }
        return ans;
    }
};