class Solution {
public:
    int calPoints(vector<string>& ops) {
       vector<int>v; 
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]!="D" && ops[i]!="C" && ops[i]!="+")
            {
                int n=stoi(ops[i]);
                
                v.push_back(n);
            }
            else{
                if(ops[i]=="D")
                    v.push_back(v[v.size()-1]*2);
                else if(ops[i]=="+")
                    v.push_back(v[v.size()-1]+v[v.size()-2]);
                else v.pop_back();
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
     return sum;
    }
};