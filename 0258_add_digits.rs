impl Solution {
    pub fn add_digits(num: i32) -> i32 {
        if (num < 10) {
            return num;
        }
        let (mut sum, mut n) = (0, num);
        
        loop {
            sum += n % 10;
            n /= 10;
            
            if n == 0 { break; }
        }
        return Solution::add_digits(sum);
    }
}
