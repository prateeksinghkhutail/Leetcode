class Solution {
public:
   void dfs(string s, string curr, int index, unordered_set<string>& dict, vector<string>& out) {
	if(index == s.size()) {
		curr.pop_back(); //remove trailing space
		out.push_back(curr);
		return;
	}
	string word;
	for(int i = index; i < s.size(); i++) {
		word += s[i];
		if(dict.find(word) != dict.end()) {
			dfs(s, curr + word + ' ', i+1, dict,out);
		}
	}
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
	vector<bool> visited(s.size(),false);
	vector<string> out;
	unordered_set<string> dict(wordDict.begin(),wordDict.end());
	//bfs(s,dict,out);
	dfs(s, "",0, dict,out);
	return out;
}
};