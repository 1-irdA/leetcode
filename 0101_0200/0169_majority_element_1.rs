use std::collections::HashMap;

impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut occurs = HashMap::new();
        let (mut key_occur, mut val_occur, major) = (0, 0, nums.len() / 2);
        
        for v in nums {
            *occurs.entry(v).or_insert(0) += 1;
        }
        
        for (key, occur) in occurs {
            if occur > major && occur > val_occur {
                val_occur = occur;
                key_occur = key;
            } 
        }
        key_occur
    }
}