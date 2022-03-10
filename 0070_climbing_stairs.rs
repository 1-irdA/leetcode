// Fibonacci
impl Solution {
    pub fn climb_stairs(n: i32) -> i32 {
        let (mut prev, mut curr) = (0, 1);
        
        (0..n).for_each(|_| {
            let sum = prev + curr;
            prev = curr;
            curr = sum;
        });
        
        curr
    }
}