class Solution {
public:

int climbingDp(int n,vector<int>&dp){
    if(n<=2){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = climbingDp(n-1,dp) + climbingDp(n-2,dp); 
}

int climbTailDp(int n ,vector<int>&dp){
    
    if(n<=2){
        return n;
    }

    dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        // return climbingDp(n,dp);

        return climbTailDp(n,dp);
    }
};