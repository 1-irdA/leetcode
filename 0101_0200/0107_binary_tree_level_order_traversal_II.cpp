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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int height = computeHeight(root);
        vector<vector<int>> ans(height);
        helper(root, ans, 0, height);       
        return ans;
    }
    
    void helper(TreeNode * root, vector<vector<int>> &ans, int level, int height) {
        if (!root) {
            return;
        }
        ans[height - level - 1].push_back(root->val);
        helper(root->left, ans, level + 1, height);
        helper(root->right, ans, level + 1, height);
    }
    
    int computeHeight(TreeNode * root) {
        if (!root) {
            return 0;
        }
        return max(computeHeight(root->left), computeHeight(root->right)) + 1;
    }
};