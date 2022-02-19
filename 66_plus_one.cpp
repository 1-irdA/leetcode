class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool run = true;
        
        for (auto it { std::rbegin(digits) }; it != std::rend(digits) && run; it++)
        {
            if (*it + 1 < 10) {
                *it += 1;
                run = false;
            } else {
                *it = 0;
            }
        }
        
        if (digits[0] == 0) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};