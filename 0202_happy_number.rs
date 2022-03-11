// 4 is the first number of unhappy cycle
// https://en.wikipedia.org/wiki/Happy_number
impl Solution {
    pub fn is_happy(n: i32) -> bool {
        if n == 1 {
            return true;
        } else if n == 4 {
            return false;
        }
        let (mut values, mut num) = (vec![], n);
        
        loop {
            values.push((num % 10).pow(2));
            num /= 10;
            
            if num == 0 { break; }
        }
        return Solution::is_happy(values.iter().sum());
    }
}