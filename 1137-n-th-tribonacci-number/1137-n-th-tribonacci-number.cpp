class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int>map;
        return series(n,map);
    }
    int series(int n,unordered_map<int,int>&map)
    {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        int ck=n;
        if(map.find(ck)!=map.end())
            return map[ck];
        
        int a=series(n-1,map);
        int b=series(n-2,map);
        int c=series(n-3,map);
        map[ck]=a+b+c;
        return map[ck];
    }
};