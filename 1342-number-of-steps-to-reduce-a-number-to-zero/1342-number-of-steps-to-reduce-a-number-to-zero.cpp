class Solution {
public:
    int numberOfSteps (int num) {
        int count=0;
        while(num){
            if(num%2){ 
                --num;
            }
            else{ 
                num>>=1; 
            }
            ++count;
        }
        return count;
    }
};