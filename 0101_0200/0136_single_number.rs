use std::collections::HashMap;

impl Solution {
    pub fn single_number(nums: Vec<i32>) -> i32 {
        if nums.len() == 1 {
            return nums[0];
        }
        let mut occurs = HashMap::new();
        
        for v in nums {
            let count = occurs.entry(v).or_insert(0);
            *count += 1;
        }
        *occurs.iter()
            .filter(|t| *t.1 == 1)
            .collect::<Vec<_>>()[0].0
    }
}
