class Solution {
public:
    char findTheDifference(string s, string t) {
        int size = s.size(), sum = 0;
        
        for (int i = 0; i < size; i++) {
            sum -= s[i];
            sum += t[i];
        }
        return sum + t[size];
    }
};