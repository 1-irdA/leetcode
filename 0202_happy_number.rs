// 4 is the first number of unhappy cycle
// https://en.wikipedia.org/wiki/Happy_number
impl Solution {
    pub fn is_happy(mut n: i32) -> bool {
        if n == 1 {
            return true;
        } else if n == 4 {
            return false;
        }
        let mut sum = 0;
        
        loop {
            sum += (n % 10).pow(2);
            n /= 10;
            
            if n == 0 { break; }
        }
        return Solution::is_happy(sum);
    }
}
