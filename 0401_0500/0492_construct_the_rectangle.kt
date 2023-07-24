import kotlin.math.sqrt;

class Solution {
    fun constructRectangle(area: Int): IntArray {
        
        var length = 1;
        var width = 1;

        (1..sqrt(area.toDouble()).toInt()).forEach { num ->
            if (area % num == 0) {
                length = area / num;
                width = num;
            }
        }
        return intArrayOf(length, width)
    }
}
