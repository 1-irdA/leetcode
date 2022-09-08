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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        
        if (n == 1) {
            return new TreeNode(nums[0]);
        }
        return toBstHelper(nums, 0, n - 1);
    }
            
    TreeNode * toBstHelper(vector<int> &nums, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        int mid = start + (end - start) / 2;
        TreeNode * root = new TreeNode(nums[mid]);
        root->left = toBstHelper(nums, start, mid - 1);
        root->right = toBstHelper(nums, mid + 1, end);
        return root;
    }        
};