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

int fibTail(int n,vector<int>&dp){
    if(n<=1) return n;
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}


    int fib(int n) {
        vector<int>dp(n+1);
        // return fibDp(n,dp);

        return fibTail(n,dp);

    }
};