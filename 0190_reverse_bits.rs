impl Solution {
    pub fn reverse_bits(x: u32) -> u32 {
        let (mut result, mut x) = (0, x);
        
        (0..32).for_each(|_| {
            result <<= 1;
            result |= x & 1;
            x >>= 1;
        });
        
        result
    }
}