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
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        stack<TreeNode*> st;
        unordered_map<TreeNode*, int> depth;
        int diameter = 0;
        TreeNode* prev = nullptr;
        TreeNode* curr = root;
        while (!st.empty() || curr) {
            if (curr) {
                st.push(curr);
                curr = curr->left;
            } else {
                TreeNode* node = st.top();
                if (node->right && node->right != prev) {
                    curr = node->right;
                } else {
                    st.pop();
                    int left = node->left ? depth[node->left] : 0;
                    int right = node->right ? depth[node->right] : 0;
                    depth[node] = 1 + max(left, right);
                    diameter = max(diameter, left + right);
                    prev = node;
                }
            }
        }
        return diameter;
    }
};
