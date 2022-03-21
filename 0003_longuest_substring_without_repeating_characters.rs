use std::cmp::max;
use std::collections::HashMap;

impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        let mut occurs = HashMap::new();
        let (mut res, mut before, mut cur) = (0, -1, 0);
        
        s.chars()
            .for_each(|c| {     
                match occurs.insert(c, cur) {
                    Some(x) => before = max(before, x),
                    None => {}
                }
                res = max(res, cur - before);
                cur += 1;
            }); 
        
        res
    }
}