class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<arr.size();i++)
        {
            int currentRem=((arr[i]%k)+k)%k;
            map[currentRem]+=1;
        }
        
        for(int i=0;i<=k/2;i++)
        {
            if(i==0)
            {
                if(map[i]%2!=0)
                    return false;
            }
            else{
                int y=k-i;
                if(map[i]!=map[y])
                    return false;
            }
        }
        return true;
        
        
    }
};