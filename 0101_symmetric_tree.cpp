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
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return false;
        }
        return recursion(root->left, root->right);
    }
    
    bool recursion(TreeNode * left, TreeNode * right) {
        if (!left && !right) {
            return true;
        } else if ((!left && right) || (left && !right)) {
            return false;
        }
        return left->val == right->val
                && recursion(left->right, right->left) 
                && recursion(left->left, right->right);
    }
};