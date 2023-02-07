class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int count=0;
        int release=0;
        int distinct=0;
        unordered_map<int,int>map;
        for(int i=0;i<fruits.size();i++)
        {
            
            int n=fruits[i];
            if(map.find(n)!=map.end())
            {
                map[n]++;
                count++;
            }
            else{
                map[n]=1;
                distinct++;
                count++;
            }
            
            while(release<=i&&distinct>2)
            {
                int x=fruits[release];
                release++;
                map[x]--;
                if(map[x]==0)
                {
                    map.erase(x);
                    distinct--;
                    
                }
                count--;
                
            }
            
            ans=max(count,ans);
            
            
        }
        return ans;
        
    }
};