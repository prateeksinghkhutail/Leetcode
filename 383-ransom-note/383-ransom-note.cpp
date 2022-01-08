class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(int i=0;i<magazine.length();i++)
        {
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(m.find(ransomNote[i])!=m.end())
            {
                if(m[ransomNote[i]]>0)
                {
                    m[ransomNote[i]]--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};