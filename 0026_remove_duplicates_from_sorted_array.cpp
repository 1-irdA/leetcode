class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
         * In this chall, max cannot be greater than 100,
         * if we don't know max, search with max_element
         */
        const int MAX = 101;
        int nb = 1;

        if (nums.size() == 0) return 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                nums[i - 1] = MAX; 
            } else {
                nb++;
            }
        }
        sort(nums.begin(), nums.end());

        return nb;
    }
};