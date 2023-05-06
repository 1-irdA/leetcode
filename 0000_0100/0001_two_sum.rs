use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut exists = HashMap::new();
    
        for (i, n) in nums.iter().enumerate() {
            if exists.contains_key(&(target-n)) { 
                return vec![i as i32, *exists.get(&(target-n)).unwrap() as i32];
            } else {
                exists.insert(n, i);
            }
        }
        
        Vec::new()
    }
}