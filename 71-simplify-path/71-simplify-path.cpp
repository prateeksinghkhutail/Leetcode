class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string>s;
        string res;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]!='/')
            {
                string cfile;
                while(i<path.size() && path[i]!='/')
                {
                    cfile+=path[i];
                    i++;
                }
                if(cfile!=".")
                {
                    if(cfile=="..")
                    {
                        if(!s.empty())
                        {
                            s.pop();
                        }
                    }
                    else{
                        s.push(cfile);
                    }
                }
            }
        }
        
        while(!s.empty())
        {
            res=("/"+s.top()+res);
            s.pop();
        }
        if(res.size()==0)
        {
            res="/";
        }
        return res;
    }
};