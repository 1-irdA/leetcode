impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut result = vec![vec![1]];
        
        (1..num_rows as usize).for_each(|i| {
            result.push(vec![1; i + 1]);
            (1..i as usize).for_each(|j| {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];   
            });   
        });
        
        result
    }
}