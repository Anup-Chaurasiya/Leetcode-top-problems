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

int climbTailDp(int n){
    
    if(n<=2){
        return n;
    }

    int pre2=1;
    int pre1=2;

    for(int i=3;i<=n;i++){
        int curr = pre2 + pre1;
        pre2=pre1;
        pre1=curr;
    }

    return pre1;
}

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        // return climbingDp(n,dp);

        return climbTailDp(n);
    }
};