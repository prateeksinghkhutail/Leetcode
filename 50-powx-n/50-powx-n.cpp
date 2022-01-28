class Solution {
public:
    double myPow(double x, int n) {
       if(n<0)return pow((1/x),n);
        return pow(x,n);
    }
    double pow(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        double ans=pow(x,n/2);
        ans*=ans;
        if(n&1){
            ans=ans*x;
        }
       
        return ans;
        
    }
};