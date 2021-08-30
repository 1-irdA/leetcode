class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
         * In this chall, max cannot be greater than 100,
         * if we don't know max, search with max_element
         */
        const int MAX = 51;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums[i] = MAX;
            }   
        }

        sort(nums.begin(), nums.end());

        return count_if(nums.begin(), nums.end(), [](int elt){ return elt != MAX; });
    }
};