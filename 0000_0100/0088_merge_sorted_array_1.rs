impl Solution {
    pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
        
        let (mut i, mut j, mut flag, m, n) = (0usize, 0usize, m as usize, m as usize, n as usize);
        
        while i < m + n && j < n {
            if nums1[i] <= nums2[j] && i < flag {
                i += 1;
            } else {
                nums1.insert(i, nums2[j]);
                j += 1;
                flag += 1;
            }
        }
        nums1.truncate(n + m);
    }
}