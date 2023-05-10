impl Solution {
    pub fn reverse(x: i32) -> i32 {
        let (mut cur, mut res): (i32, i32) = (x, 0);
        
        while cur != 0 {
            match res.checked_mul(10) {
                None => return 0,
                Some(tmp) => match tmp.checked_add(cur % 10) {
                    None => return 0,
                    Some(tmp) => {
                        res = tmp;
                    }
                } 
            }
            cur /= 10;
        }
        res
    }
}
