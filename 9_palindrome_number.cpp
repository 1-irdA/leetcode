class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int i, max = num.length() / 2;
        
        for (i = 0; i < max && num[i] == num[num.length() - i - 1]; i++);
        
        if (i == max) {
            return true;
        }
        
        return false;
    }
};