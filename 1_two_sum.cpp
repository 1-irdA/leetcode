class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        int to_find, index;
        vector<int>::iterator it;
        
        for (int i = 0; i < nums.size(); i++) {
            to_find = target - nums[i];
            it = find(nums.begin(), nums.end(), to_find);
            index = distance(nums.begin(), it);
            
            if (it != nums.end() && index != i) {
                results.push_back(i);
                results.push_back(index);
                return results;
            }
        }
        
        return results;
    }
};