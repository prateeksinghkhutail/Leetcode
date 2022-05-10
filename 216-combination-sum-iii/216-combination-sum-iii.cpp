class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int>candidate{1,2,3,4,5,6,7,8,9};
         totalcomb(candidate,0,k,n);
        return ans;
    }
    
    
    void totalcomb(vector<int>&c,int ci,int k,int target)
    {
        if(target==0 && k==0)
        {
            ans.push_back(v);
            return;
        }
        
        if(ci>=c.size())
            return;
        int curr=c[ci];
        
        if(target>=curr)
        {
            v.push_back(curr);
            totalcomb(c,ci+1,k-1,target-curr);
            v.pop_back();
            
            
        }
        totalcomb(c,ci+1,k,target);
        
        
    }
};