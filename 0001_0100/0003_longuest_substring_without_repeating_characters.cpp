class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> occurs;
        int res = 0, before = -1, cur = 0;

        for (char c : s) {
            if (occurs.count(c) == 1) {
                before = max(before, occurs[c]);
            }
            occurs[c] = cur;
            res = max(res, cur - before);
            cur++;
        }
        return res;
    }
};