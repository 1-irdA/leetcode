class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int nbVowelStrings = 0;
        map<char, bool> m = {
            {'a', true},
            {'e', true},
            {'i', true},
            {'o', true},
            {'u', true}
        };

        for (int i = left; i <= right; i++) {
            if (m[words[i][0]] && m[words[i][words[i].size() - 1]]) {
                nbVowelStrings++;
            }
        }
        return nbVowelStrings;
    }
};