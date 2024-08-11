#include <algorithm>  // For max

using namespace std;

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
    // Helper function to find diameter and height
    pair<int, int> diameterFind(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0}; // {diameter, height}
        }

        auto left = diameterFind(root->left);
        auto right = diameterFind(root->right);

        int leftDiameter = left.first;
        int rightDiameter = right.first;
        int leftHeight = left.second;
        int rightHeight = right.second;

        int currentDiameter = leftHeight + rightHeight; // Path through the current node
        int currentHeight = max(leftHeight, rightHeight) + 1; // Height of the current node

        int diameter = max(currentDiameter, max(leftDiameter, rightDiameter));

        return {diameter, currentHeight};
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diameterFind(root).first;
    }
};
