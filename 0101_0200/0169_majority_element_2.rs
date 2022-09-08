// Boyer–Moore majority vote algorithm
impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {

        let (mut count, mut major) = (1, nums[0]);
        
        (1..nums.len()).for_each(|i| {
            if count == 0 {
                major = nums[i]; 
            }
            if nums[i] == major {
                count += 1;
            } else {
                count -= 1;
            }
        });
            
        major
    }
}