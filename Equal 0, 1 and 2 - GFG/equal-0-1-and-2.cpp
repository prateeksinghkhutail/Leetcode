// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
        long long ans=0;
        int z0=0;
        int z1=0;
        int z2=0;
        
        unordered_map<string,int>map;
        string exp=to_string(z1-z0)+"-"+to_string(z2-z1);
        map[exp]=1;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                z0+=1;
            }
            else if(str[i]=='1')
            {
                z1+=1;
            }
            else{
                z2+=1;
            }
            
            exp=to_string(z1-z0)+"-"+to_string(z2-z1);
            
            if(map.find(exp)!=map.end())
            {
                ans+=map[exp];
                map[exp]++;
                
            }
            else{
                map[exp]=1;
            }
            
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}
  // } Driver Code Ends