class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxans=0;
        while(i<j)
        {
            int a=j-i;
            int b=min(height[i],height[j]);
            maxans=max(a*b,maxans);
            if(height[i]<height[j])
                i++;
            else j--;
            
        }
        return maxans;
            
    }
};