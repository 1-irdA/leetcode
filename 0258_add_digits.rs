impl Solution {
    pub fn add_digits(num: i32) -> i32 {
        if (num < 10) {
            return num;
        }
        let (mut values, mut n) = (vec![], num);
        
        loop {
            values.push(n % 10);
            n /= 10;
            
            if n == 0 { break; }
        }
        return Solution::add_digits(values.iter().sum());
    }
}