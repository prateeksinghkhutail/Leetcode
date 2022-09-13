class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        int n=points.size();
        if(n<2)
		return n;

	    int res=2; //as on a line two points will be there always
	    for(int i=0;i<n;i++)
	    {
		    double x1=points[i][0];
		    double y1=points[i][1];
		    map<double,int>freq;
		    int count=1;
		// looping from i + 1 to ignore same pair again
		    for(int j=i+1;j<n;j++)
		    {
			    double x2=points[j][0];
			    double y2=points[j][1];
			    if(x1==x2 && y1==y2)
			    {
				    count++;
			    }else if(x1==x2){
                    freq[INT_MAX]++;
                    
                }
			    else
			    {
				    double slope=double(y2-y1)/double(x2-x1);
				    freq[slope]++;

			    }
			}
            int localmax=0;
			auto it=freq.begin();
			while(it!=freq.end())
			{
				localmax=max(localmax,(it->second));
                
				it++;	
			}
            localmax+=count;
            res=max(res,localmax);
            
	    }
        return res;
    }
};