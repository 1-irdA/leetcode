class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        
        for (char letter : columnTitle) {
            result = result * 26 + (letter - 'A' + 1);
        }
        return result;
    }
};