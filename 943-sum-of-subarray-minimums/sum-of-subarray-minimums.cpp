class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        stack<int>st1;
        vector<int>ans1(n);
        vector<int>ans2(n);

        long long sum=0;

        long long mod = 1e9 + 7 ;

        // NSL
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()){
                ans1[i]=-1;
            }
            else{
                ans1[i] = st.top();
            }

            st.push(i);
        }
        // NSR
         for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[st1.top()]>arr[i]){
                st1.pop();
            }

            if(st1.empty()){
                ans2[i]=n;
            }
            else{
                ans2[i] = st1.top();
            }

            st1.push(i);
        }

        for(int i=0;i<n;i++){
           long long ls= i - ans1[i];
           long long rs= ans2[i] - i;

          long long totalways=ls*rs;

          long long totalSum = arr[i] * totalways;

          sum = (sum + totalSum) % mod;
        }
        return sum;
    }
};