class Solution {
    fun findMaxConsecutiveOnes(nums: IntArray): Int {
        
        var res = 0
        var current = 0

        for (num in nums) {
            current = if (num == 1) current + 1 else 0
            res = if (current > res) current else res
        }
        return res
    }
}
