class Solution {
private:
    int countBitsInNum(int n) {
        int bits = 0;

        while (n > 0) {
            bits += n % 2;
            n /= 2;
        }
        return bits;
    }

public:
    vector<int> countBits(int n) {
        vector<int> bits;

        for (int i = 0; i <= n; i++) {
            bits.push_back(countBitsInNum(i));
        }
        return bits;
    }
};
