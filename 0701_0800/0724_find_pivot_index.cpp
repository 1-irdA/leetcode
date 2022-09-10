class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1, size = nums.size(), rsum = 0, lsum = 0;
        
        for (int n : nums) {
            rsum += n;
        }
        int i;
        
        for (i = 0; index == -1 && i < size; i++) {
            rsum -= nums[i];
            
            if (lsum == rsum) {
                index = i;
            }
            lsum += nums[i];
        }
        return index;
    }
};