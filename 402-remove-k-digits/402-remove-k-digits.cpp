class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>ms;
        for(char c:num)
        {
            while(!ms.empty() && k>0 && ms.top()>c)
            {
                ms.pop();
                k=k-1;
            }
            if(!ms.empty() || c!='0')
            {
                ms.push(c);
            }
            
        }
        
        while(!ms.empty() && k--)
        {
            ms.pop();
        }
        if(ms.empty())
            return "0";
        
        while(!ms.empty())
        {
            num[n-1]=ms.top();
            ms.pop();
            n--;
        }
        return num.substr(n);
    }
};