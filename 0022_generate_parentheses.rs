impl Solution {
    pub fn generate_parenthesis(n: i32) -> Vec<String> {
        let mut result: Vec<String> = Vec::new();
        Self::backtrack(&mut result, "".to_string(), 0, 0, n);
        result
    }

    fn backtrack(parenthesis: &mut Vec<String>, current: String, open: i32, close: i32, max: i32) {
        if current.len() as i32 == max * 2 {
            parenthesis.push(current);
            return;
        }
    
        if open < max {
            Self::backtrack(parenthesis, current.clone() + "(", open + 1, close, max);
        }
    
        if close < open {
            Self::backtrack(parenthesis, current.clone() + ")", open, close + 1, max);
        }
    }
}