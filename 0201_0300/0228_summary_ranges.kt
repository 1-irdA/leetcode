class Solution {
    fun summaryRanges(nums: IntArray): List<String> {
        val results = mutableListOf<String>()

        if (nums.isEmpty()) return results
        var i = 0

        while (i < nums.size) {
            
            val y = i
            var current = "${nums[i]}"

            while (i < nums.lastIndex && nums[i] + 1 == nums[i + 1]) i++
            if (y < i) current += "->${nums[i]}"
            results.add(current)
            i++
        }
        return results
    }
}
