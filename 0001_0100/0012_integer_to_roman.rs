use std::collections::HashMap;

impl Solution {
    pub fn int_to_roman(mut num: i32) -> String {
        let (mut res, mut max) = ("".to_string(), 0);
        let symbols = vec!["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"];
        let values = vec![1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];

        (0..symbols.len())
            .for_each(|i| {
                if num >= values[i] {
                    max = num / values[i];
                    (0..max).for_each(|_| res.push_str(symbols[i]));
                    num -= values[i] * max;
                }
            });
        res
    }
}
