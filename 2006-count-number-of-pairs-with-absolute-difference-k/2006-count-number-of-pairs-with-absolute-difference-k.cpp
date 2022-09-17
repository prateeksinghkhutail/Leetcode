class Solution {
public:
    int countKDifference(vector<int>& num, int k) {
        unordered_map<int,int>map; //(value,freq)
        int count=0;
        int diff=0;
        
        for(int i=0;i<num.size();i++)
        {
            int v1=map[num[i]-k];
            int v2=map[num[i]+k];
            count+=v1+v2;
           map[num[i]]++;
           
        }
        return count;
        
    }
};