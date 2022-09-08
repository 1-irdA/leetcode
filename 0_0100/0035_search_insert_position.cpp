class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int place = -1;
    
        if (nums.size() == 0 || target <= nums[0]) {
            return 0;
        }
    
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == target) {
                return i;
            } else if (target > nums[i] && target <= nums[i + 1]) {
                place = i + 1;
            }
        }
    
        return place != -1 ? place : nums.size();
    }
};