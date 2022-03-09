impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let result: String = s.to_lowercase()
                            .chars()
                            .filter(|c| c.is_alphabetic() || c.is_digit(10))
                            .collect::<String>()
                            .to_lowercase();
        
        result == result.chars()
                        .rev()
                        .collect::<String>()
    }
}