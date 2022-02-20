class Solution {
public:
    
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int count=0;
        int l=intervals[0][0];
        int h=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(l<=intervals[i][0] && h>=intervals[i][1])
                count++;
            else{
                l=intervals[i][0];
                h=intervals[i][1];
            }
        }
        return intervals.size()-count;
        
    }
};