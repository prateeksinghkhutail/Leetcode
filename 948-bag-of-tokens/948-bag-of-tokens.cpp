class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int points=0;
        int i=0;int j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                points++;
                i++;
                score=max(score,points);
            }
            else if(score>0)
            {
                power+=tokens[j];
                points--;
                j--;
            }else {break;}
        }
        return score;
    }
};