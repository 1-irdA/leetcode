use std::cmp::max;

impl Solution {
    pub fn max_area(height: Vec<i32>) -> i32 {
        let (mut left, mut right, mut area) = (0, height.len() - 1, 0);

        while left < right {
            if height[left] > height[right] {
                area = max(area, (right - left) as i32 * height[right]);
                right -= 1;
            } else {
                area = max(area, (right - left) as i32 * height[left]);
                left += 1;
            }
        }
        area
    }
}
