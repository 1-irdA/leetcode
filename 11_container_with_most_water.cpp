class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_area = 0;
        
        while (left < right) {
            if(height[left] > height[right]){
                max_area = max(max_area, (right - left) * height[right]);
                right--;
            } else{
                max_area = max(max_area, (right - left) * height[left]);
                left++;
            }
        }
        
        return max_area;
    }
};