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
    void inorder(vector<int> &ans, TreeNode* root) {
        if(root == nullptr) {
            return ;
        }

        inorder(ans, root->left);
        ans.push_back(root->val);
        inorder(ans, root->right);
    }


    bool isSorted(vector<int> &ans) {
        for(int i = 0; i < ans.size() - 1; i++) {
            if(ans[i] >= ans[i+1]) {
                return false;
            }
        }
        return true;
    }
public:
    bool isValidBST(TreeNode* root) {
        if(root == nullptr or (root->left == nullptr and root->right == nullptr)) {
            return true;
        }

        vector<int> ans;
        for(auto element: ans) {
            cout << element << "";
        }
        inorder(ans, root);
        if(isSorted(ans)) {
            return true;
        }
        return false;
    }
};