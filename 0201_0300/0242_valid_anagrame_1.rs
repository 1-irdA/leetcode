use std::collections::HashMap;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        
        if s.len() != t.len() {
            return false;
        }
        let mut occurs = HashMap::new();
        
        s.chars()
            .zip(t.chars())
            .for_each(|(s, t)| {
                
                if s == t {
                    return
                }
                *occurs.entry(s).or_insert(0) += 1;
                *occurs.entry(t).or_insert(0) -= 1;
            }
        );
        
        occurs.values().find(|&&x| x != 0 ).is_none()
    }
}