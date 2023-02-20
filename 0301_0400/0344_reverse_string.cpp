class Solution {
public:
    void reverseString(vector<char>& s) {
        const int SIZE = s.size();

        for (int i = 0; i < SIZE / 2; i++) {
            char tmp = s[i];
            s[i] = s[SIZE - i - 1];
            s[SIZE - i - 1] = tmp;
        }
    }
};