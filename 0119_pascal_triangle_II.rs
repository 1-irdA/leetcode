impl Solution {
    
    // row_index = 5
    // [1, 1, 1, 1, 1, 1]
    // [1, 2, 1, 1, 1, 1]
    // [1, 2, 3, 1, 1, 1]
    // [1, 3, 3, 1, 1, 1]
    // [1, 3, 3, 4, 1, 1]
    // [1, 3, 6, 4, 1, 1]
    // [1, 4, 6, 4, 1, 1]
    // [1, 4, 6, 4, 5, 1]
    // [1, 4, 6, 10, 5, 1]
    // [1, 4, 10, 10, 5, 1]
    pub fn get_row(row_index: i32) -> Vec<i32> {
        let mut solution = vec![1; (row_index + 1) as usize];
        
        (1..=row_index as usize)
            .for_each(|i| 
                (1..i)
                    .rev()
                    .for_each(|j| solution[j] += solution[j - 1]));

        solution
    }
}