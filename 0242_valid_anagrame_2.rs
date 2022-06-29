use std::collections::HashMap;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        
        if s.len() != t.len() {
            return false;
        }
        let mut first = HashMap::new();
        let mut second = HashMap::new();
        
        s.chars().for_each(|c| *first.entry(c).or_insert(0) += 1);
        t.chars().for_each(|c| *second.entry(c).or_insert(0) += 1);
        
        for (k, v) in &first {
            match second.get(k) {
                Some(x) if x != v => return false,
                None => return false,
                _ => {}
            }
        }
        true
    }
}