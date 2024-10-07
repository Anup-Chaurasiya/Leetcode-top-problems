class Solution {
public:

int fibDp(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fibDp(n-1,dp) + fibDp(n-2,dp);
}

int fibTail(int n){
    if(n<=1) return n;
    int pre2=0;
    int pre1=1;

    for(int i=2;i<=n;i++){
        int curr = pre2 + pre1 ;
        pre2 = pre1;
        pre1 = curr;
    }

    return pre1;
}


    int fib(int n) {
        vector<int>dp(n+1);
        // return fibDp(n,dp);

        return fibTail(n);

    }
};