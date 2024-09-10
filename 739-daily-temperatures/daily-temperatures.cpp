class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size()-1;
        vector<int>ans(n+1);

        stack<int>st;
        for(int i=n;i>=0;i--){
           
           while(!st.empty() && temp[i]>=temp[st.top()]){
            st.pop();
           }

           if(st.empty()){
            ans[i]=0;
           }
           else{
            ans[i]=st.top()-i;
           }

           st.push(i);
        }
        return ans;
    }
};