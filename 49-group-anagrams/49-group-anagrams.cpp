class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        if(strs.size()==1)
            return {{strs[0] }};
        unordered_map<string,vector<string>>map;
        for(int  i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); // Sorting the string
            map[strs[i]].push_back(str);  // Sorted string is the key and the value is the initial string and we are adding same strings to vector 
        }
            for(auto i = map.begin(); i != map.end(); i++)
            v.push_back(i -> second);  // Traversing the map and adding the vectors of string to ans
        return v;
    }
};