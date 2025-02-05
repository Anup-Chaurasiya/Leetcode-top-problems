#define mod 1000000007

// Formula  

//  (a*b) % mod = (a % mod * b % mod) % mod ; 
//  (a+b) % mod = (a % mod + b % mod) % mod ; 

// if length = n then even count  = n/2 + n% 2 and odd count n/2

class Solution {
private:
    long long power(long long x, long long y){
        if(y == 0) return 1;

        long long ans  = power(x,y/2);

        ans = (ans*ans) % mod ;
        if(y%2){
            ans = (ans * x) % mod;
        }

        return ans ;
       

    }
public:
    int countGoodNumbers(long long n) {
        long long even  = (n+1)/2;
        long long odd = n/2;

        long long res1 = power(5,even);
        long long res2 = power(4,odd);
        
        return (res1 * res2) % mod;

    }
};