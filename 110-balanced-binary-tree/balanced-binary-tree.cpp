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
    private:
    pair<bool,int>isBalancedFast(TreeNode*root){
        if(root==NULL){
            return {true,0};
        }
        pair<bool,int>left=isBalancedFast(root->left);
        pair<bool,int>right=isBalancedFast(root->right);

        bool leftAns=left.first;
        bool rightAns=right.first;
        bool diff= abs(left.second - right.second) <=1;

        int currHeight=max(left.second,right.second)+1;

        bool balanced=leftAns && rightAns && diff;

        return {balanced,currHeight};

    }

public:
    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};