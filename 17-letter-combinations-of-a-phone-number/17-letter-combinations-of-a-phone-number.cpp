class Solution {
public:
    vector<string>mappings={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"},ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="")return ans;
        solve(digits,0,"");
        return ans;
    }
    
    
    void solve(string &digits,int i,string combi)
    {
        if(i==size(digits))
            ans.push_back(combi);
        else 
            for(auto c:mappings[digits[i]-'2'])
                solve(digits,i+1,combi+c);
    }
};