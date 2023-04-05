class Solution {
public:
    int maximumCount(vector<int>& nums) {
        auto [a, b] = equal_range(nums.begin(), nums.end(), 0);
        return max(distance(nums.begin(), a), distance(b, nums.end()));
    }
};