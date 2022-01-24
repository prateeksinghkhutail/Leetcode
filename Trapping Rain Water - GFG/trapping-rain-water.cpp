// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
       
        long long ans=0;
        int left[n];
        int right[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            long long  var=min(left[i-1],right[i+1]);
            if(var>arr[i])
                ans+=var-arr[i];
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends