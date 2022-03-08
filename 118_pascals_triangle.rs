impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut result = vec![vec![1]];
        
        (1..num_rows as usize).for_each(|i| {
            result.push(vec![]);
            (0..=i as usize).for_each(|j| {
                if j == 0 || j == i {
                    result[i].push(1); 
                } else {
                    let x = result[i - 1][j - 1] + result[i - 1][j];
                    result[i].push(x);   
                }
            });   
        });
        
        result
    }
}
