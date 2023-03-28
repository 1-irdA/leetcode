class Solution {
public:
    string reverseVowels(string s) {

        int n = s.size();

        if (n == 1) {
            return s;
        }
        string vowels = "aeiouAEIOU";
        vector<int> pos;

        for (int i = 0; i < n; i++) {
            if (vowels.find(s[i]) != string::npos) {
                pos.push_back(i);
            }
        }
        n = pos.size();

        if (n < 2) {
            return s;
        }
        for (int j = 0; j < n / 2; j++) {
            swap(s[pos[j]], s[pos[n - j - 1]]);
        }
        return s;
    }
};