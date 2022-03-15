use std::collections::HashMap;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let occurs = nums
                        .iter()
                        .map(|n| (n, 0))
                        .collect::<HashMap<_, _>>();
        occurs.len() != nums.len()
    }
}