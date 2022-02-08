class Solution {
public:
    int addDigits(int num) {
        int sum;
        if(num==0)
            return 0;
        if(num/10==0)
            return num; 
        while(num/10!=0)
        {
            int n=num;
            sum=0;
            while(n>0)
            {
                sum=sum+n%10;
                n=n/10;
            }
            num=sum;
        }
        return sum;
    }
};