class Solution {
public:
 
   vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);  // Initialize answer array with -1
        stack<int> st;

        // Iterate through the array twice to handle circular nature
        for (int i = 0; i < 2 * n; ++i) {
            int index = i % n;  // Get the index in the original array
            // Maintain the stack such that the top of the stack is the next greater element
            while (!st.empty() && nums[st.top()] < nums[index]) {
                ans[st.top()] = nums[index];
                st.pop();
            }
            // Push current index onto stack
            st.push(index);
        }

        return ans;
    }
};


//         stack<int>st;
//         int n=nums.size();
//         vector<int>ans(n);
//         for(int i=n-2;i>=0;i--){
//             while(!st.empty() && nums[st.top()]<=nums[i]){
//                 st.pop();
//             }
//            if(st.empty()){
//             ans[i]= -1 ;
//             }
//            else{
//             ans[i]=nums[st.top()];
//            }

//            st.push(i);

//         }

//         ans[n-1]=ans[n-3];

//         return ans;

//     }
// };