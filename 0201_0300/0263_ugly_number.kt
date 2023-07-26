class Solution {
    fun isUgly(n: Int): Boolean {
        
        if (n == 0) {
            return false
        }
        var num = n

        intArrayOf(2, 3, 5).forEach {
            while (num % it == 0) num /= it
        }
        return num == 1
    }
}
