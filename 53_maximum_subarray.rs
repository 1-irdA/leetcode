impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let (mut max, mut sum) = (nums[0], nums[0]);
    
        (1..nums.len())
            .for_each(|i| {
                sum += nums[i];
            
                if nums[i] > sum {
                    sum = nums[i];
                }
            
                if sum > max {
                    max = sum;
                } else if sum < 0 {
                    sum = 0;
                }
            });
    
        max
    }
}