class Solution {
public:
    map<char, int> symbols {
        { 'M', 1000 },  
        { 'D', 500 },
        { 'C', 100 }, 
        { 'L', 50 },
        { 'X', 10 },
        { 'V', 5 },
        { 'I', 1 }
    };
    
    int romanToInt(string s) {
        int number = 0;
        int max = s.length() - 1;
        
        if (s.length() == 1) {
            return symbols[s[0]];
        }
        
        for (int i = 0; i < max; i++) {
            if (symbols[s[i]] < symbols[s[i+1]]) {
                number += symbols[s[i+1]] - symbols[s[i]];
                i++;
            } else {
                number += symbols[s[i]];
            }
                            
            if (i == max - 1) {
                number += symbols[s[i+1]];
            }
        }
        
        return number;
    }
};