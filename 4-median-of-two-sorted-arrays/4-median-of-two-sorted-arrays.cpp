class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size();
        int y=nums2.size();
        //if(x==0 && y==0)return NULL;
        //if(x==0)return (nums2[0]+nums2[])/2;
        //if()
        if(x>y)
            return findMedianSortedArrays(nums2,nums1);
        
        int low=0;
        int high=x;
        double ans;
        while(low<=high){
            int px=(low+high)/2;
            int py=(x+y+1)/2-px;
            
            int maxleftx=(px==0)?INT_MIN:nums1[px-1];
            int minrightx=(px==x)?INT_MAX:nums1[px];
            
            int maxlefty=(py==0)?INT_MIN:nums2[py-1];
            int minrighty=(py==y)?INT_MAX:nums2[py];
            
            if(maxleftx<=minrighty && maxlefty<=minrightx)
            {
                if ((x + y) % 2 == 0) {
                   ans=((double)max(maxleftx, maxlefty) + min(minrightx, minrighty))/2;
                    break;
                } else {
                    ans=(double)max(maxleftx, maxlefty);
                    break;
                }
            } else if (maxleftx > minrighty) {
                high = px - 1;
            } else { 
                low = px + 1;
            }
        }
         return ans;
        
    }
        
    
};