class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }

        bool leftToRight = true;  // Flag to indicate direction
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> res(size);  // Create a vector of the required size

            for (int i = 0; i < size; ++i) {
                TreeNode* temp = q.front();
                q.pop();

                // Insert node value in res based on the direction
                int index = leftToRight ? i : size - 1 - i;
                res[index] = temp->val;

                // Add the children of the current node to the queue
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }

            ans.push_back(res);  // Add current level to the answer
            leftToRight = !leftToRight;  // Toggle direction
        }

        return ans;
    }
};
