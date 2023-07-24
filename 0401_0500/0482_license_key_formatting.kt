class Solution {
    fun licenseKeyFormatting(s: String, k: Int): String {
        
        var key = ""

        (s.length - 1 downTo 0).forEach { i ->
            if (s[i] != '-') {
                if (key.length % (k + 1) == k) key += '-'
                key += s[i].toUpperCase()
            }
        }
        return key.reversed()
    }
}
