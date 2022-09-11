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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> elts;
        vector<double> ans;
        helper(root, elts, 0);
        
        for (vector<int> a : elts) {
            ans.push_back(accumulate(a.begin(), a.end(), 0.0) / a.size());
        }
        return ans;
    }
    
    void helper(TreeNode * root, vector<vector<int>> &elts, int level) {
        if (!root) {
            return;
        }
        if (elts.size() <= level) {
            elts.push_back(vector<int>());
        }
        elts[level].push_back(root->val);
        helper(root->left, elts, level + 1);
        helper(root->right, elts, level + 1);
    }
};