class Solution {
public:
    int addDigits(int num) {
        int ans,rem;
        if(num<10)
        return num;
        else{
            while(num>=10){
                ans=0;
                while(num!=0){
                    rem=num%10;
                    num/=10;
                    ans=ans+rem;
                }
                num=ans;
            }
        } 

        return ans;
    }
};