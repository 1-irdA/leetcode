use std::cmp::Ordering;

// Binary search
impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x <= 1 {
            return x;
        }
        let (mut result, mut start, mut end) =  (0, 1, x / 2);
        
        while start <= end {
            let mid = start + (end - start) / 2;
            
            match mid.cmp(&(x / mid)) {
                Ordering::Less => {
                    start = mid + 1;
                    result = mid;
                },
                Ordering::Greater => end = mid - 1,
                Ordering::Equal => return mid
            }
        }
        result
    }
}