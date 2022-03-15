use std::collections::HashMap;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut occurs = HashMap::new();
        
        for n in nums {
            if occurs.contains_key(&n) {
                return true;
            }
            occurs.insert(n, 1);
        }
        false
    }
}