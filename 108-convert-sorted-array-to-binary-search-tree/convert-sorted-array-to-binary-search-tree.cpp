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
    TreeNode* BST(vector<int> nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid=left+(right-left)/2;
        TreeNode* newNode=new TreeNode(nums[mid]);
        newNode->left=BST(nums,left,mid-1);
        newNode->right=BST(nums,mid+1,right);
        return newNode;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
       return BST(nums,0,nums.size()-1);

    }
};