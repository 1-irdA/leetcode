impl Solution {

    // ascii -> val
    // 50 -> 2
    // 49 -> 1
    // 48 -> 0
    pub fn add_binary(a: String, b: String) -> String {
        let mut s_a = String::from("");
        let mut s_b = String::from("");
    
        if a.len() > b.len() {
            (0..a.len() - b.len()).for_each(|_| s_b.push('0'));
        } else {
            (0..b.len() - a.len()).for_each(|_| s_a.push('0'));
        }
    
        s_a.push_str(&a);
        s_b.push_str(&b);
    
        let mut carry: u8 = 0;
        let a_bytes = s_a.as_bytes();
        let b_bytes = s_b.as_bytes();
        let mut result = String::from("");
    
        (0..a_bytes.len())
        .rev()
        .for_each(|i| {
            let sum = a_bytes[i] + b_bytes[i] + carry;
            result.push_str(&(sum % 2).to_string());
            carry = if sum >= 98 { 1 } else { 0 };
        });
    
        if carry == 1 {
            result.push('1');
        }
    
        result.chars()
            .rev()
            .collect::<String>()
    }
}

assert_eq!("110111101100010011000101110110100000011101000101011001000011011000001100011110011010010011000000000",
    add_binary(
        "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101".to_string(), 
        "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011".to_string()));
