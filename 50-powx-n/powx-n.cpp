class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
       long long positive = abs((long long)n); 

        while(positive){
            if(positive % 2==1){
               ans=ans * x;
            }
            
            x= x * x;
            positive/=2;
            
            
        }
        if(n<0){
            ans=1.0/ans;
        }
        return ans;
    }
};