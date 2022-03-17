// Binary search
impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x <= 1 {
            return x;
        }
        let (mut result, mut start, mut end) =  (0, 1, x / 2);
        
        while start <= end {
            let mid = start + (end - start) / 2;
            let cmp = x / mid;
            
            if mid > cmp {
                end = mid - 1;
            } else if mid < cmp {
                start = mid + 1;
                result = mid;
            } else {
                return mid;
            }
        }
        result
    }
}