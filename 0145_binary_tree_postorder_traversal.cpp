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
    vector<int> values;
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        recursion(root);
        return values;
    }
    
    void recursion(TreeNode * root) {
        if (!root) {
            return;
        }
        recursion(root->left);
        recursion(root->right);
        values.push_back(root->val);
    }
};