class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<int,set<char>>s,q,r;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			char cv=board[i][j];
			if(cv!='.')
			{
				if(s[i].find(cv)!=s[i].end()||q[j].find(cv)!=q[j].end()||r[3*(i/3)+j/3].find(cv)!=r[3*(i/3)+j/3].end())
				{
					 return false;
				}
				else{
					s[i].insert(cv);
					q[j].insert(cv);
					r[3*(i/3)+j/3].insert(cv);
				}

			}			
		}

	}
	
	return true;
    }
};