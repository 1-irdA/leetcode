class Solution {
public:
    int longestPalindrome(string s) {

        map<char, int> m;
        int odd = 0, len = s.size();

        for (char c : s) {
            m[c]++;
            m[c] % 2 == 1 ? odd++ : odd--;
        }
        return odd > 1 ? len - odd + 1 : len;
    }
};