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
    int target;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        return helper(root,0);
    }
    bool helper(TreeNode* root,int sum){
        if(root==nullptr){return false;}
        sum+=root->val;
        if(root->left==nullptr && root->right==nullptr){
            return sum==target;
        }
        bool lans=helper(root->left,sum);
        bool rans=helper(root->right,sum);
        return lans||rans;
    }
};