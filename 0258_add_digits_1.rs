impl Solution {
    pub fn add_digits(mut num: i32) -> i32 {
        if (num < 10) {
            return num;
        }
        let mut sum = 0;
        
        loop {
            sum += num % 10;
            num /= 10;
            
            if num == 0 { break; }
        }
        return Solution::add_digits(sum);
    }
}
