class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int a=verticalCuts.size();
        int b=horizontalCuts.size();
        int wmax=0,hmax=0;
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        wmax=max(verticalCuts[0],w-verticalCuts[a-1]);
        hmax=max(horizontalCuts[0],h-horizontalCuts[b-1]);
        
        
        for(int i=1;i<a;i++)
        {
            wmax=max(wmax,verticalCuts[i]-verticalCuts[i-1]);
        }
        
        for(int i=1;i<b;i++)
        {
            hmax=max(hmax,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        
       return long(hmax) * wmax % 1000000007;
    }
};