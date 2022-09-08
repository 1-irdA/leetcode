class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int as[256] {0}, at[256] {0}, n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (as[s[i]] != at[t[i]]) return false;
            as[s[i]] = i + 1;
            at[t[i]] = i + 1;
        }
        
        return true;
    }
};