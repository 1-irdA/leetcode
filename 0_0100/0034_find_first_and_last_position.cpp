class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = { -1, -1 };
        int i;
        
        for (i = 0; i < nums.size() && nums[i] != target; i++);
        
        if (i < nums.size()) {
            result[0] = i;
        }
        
        for (i = nums.size() - 1; i >= 0 && nums[i] != target; i--);
        
        if (i < nums.size()) {
            result[1] = i;
        }
        
        return result;
    }
};