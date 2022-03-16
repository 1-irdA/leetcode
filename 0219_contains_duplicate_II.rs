use std::collections::HashMap;

impl Solution {
    pub fn contains_nearby_duplicate(nums: Vec<i32>, k: i32) -> bool {
        let mut map = HashMap::new();
        
        for i in (0..nums.len()) {
            match map.insert(nums[i], i) { 
                Some(x) if (i - x) as i32 <= k => return true,
                _ => {}
            }
        }
        false
    }
}