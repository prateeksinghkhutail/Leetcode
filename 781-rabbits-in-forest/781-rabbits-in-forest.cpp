class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0;
        unordered_map<int,int>map;
        for(int i=0;i<answers.size();i++)
        {
            if(map.find(answers[i])!=map.end())
            {
                map[answers[i]]++;
            }
            else{
                map[answers[i]]=1;
            }
            
        }
        
        for(auto i:map)
        {
            double gsize=i.first+1;
            double freq=i.second;
            ans+=gsize*ceil(freq/gsize);
        }
        return ans;
        
        
    }
};