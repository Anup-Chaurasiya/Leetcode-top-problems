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

void preOrder(TreeNode *root , vector<int>&ans2){

    if(root==NULL){
        return ;
    }

    ans2.push_back(root->val);
    preOrder(root->left,ans2);   
    preOrder(root->right,ans2);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans2;
        preOrder(root,ans2);
        return ans2;
    }
};