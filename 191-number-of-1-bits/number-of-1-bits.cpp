class Solution {
public:
    int hammingWeight(int n) {
        int rem;
        int count = 0 ;
        while(n>0){
            rem=n%2;
            if(rem==1){
                count++;
            }
            n/=2;
        }
        return count;

    }
};