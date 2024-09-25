/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int>ans;
        if(root== NULL) return ans;

        stack<TreeNode*>st;
        stack<bool>visited;
        st.push(root);
        visited.push(0);
        while(!st.empty()){
            TreeNode * tmp = st.top();
            st.pop();
            bool flag = visited.top();
            visited.pop();

            if(flag==0){

                if(tmp->right){
                    st.push(tmp->right);
                    visited.push(0);
                }

                 st.push(tmp);
                visited.push(1);
                
                if(tmp->left){
                    st.push(tmp->left);
                    visited.push(0);
                }

            }
            else{
                ans.push_back(tmp->val);
            }
        }
        return ans;
    }
};