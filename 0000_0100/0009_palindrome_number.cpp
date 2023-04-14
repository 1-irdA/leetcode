class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int len = num.length();
        int i, max = len / 2;
        
        for (i = 0; i < max && num[i] == num[len - i - 1]; i++);
        
        return i == max;
    }
};
