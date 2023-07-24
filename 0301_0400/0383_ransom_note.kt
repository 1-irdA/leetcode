class Solution {
    fun canConstruct(ransomNote: String, magazine: String): Boolean {
        
        if (ransomNote.length > magazine.length) return false

        val chars: MutableList<Char> = ransomNote.toMutableList()
        magazine.forEach { chars.remove(it) }
        return chars.isEmpty()
    }
}
