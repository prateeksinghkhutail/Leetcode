class Solution {
public:
    bool validPalindrome(string s) {
        
        return check(s,0,s.size()-1,1);
    }
    
    bool check(string &s,int i,int j,int p)
    {
        
        
         if(i>=j)
             return true;
        
        //while(i<j)
        if(s[i]==s[j])
            return check(s,i+1,j-1,p);
        else
        { 
            
            return p>0 &&(check(s,i+1,j,p-1)||check(s,i,j-1,p-1));
            
            
    
        }
    }             
                         
                     
};