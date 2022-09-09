class Solution {
public:
    string toHex(int num) {
        
        if (num == 0) {
            return "0";
        }
        const int HEXA = 16;
        const string S = "0123456789abcdef";
        unsigned int n = num;
        std::string res;
        
        while (n > 0) {
            res = S[n % HEXA] + res;
            n /= HEXA;
        }
        return res;
    }
};