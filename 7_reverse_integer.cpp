class Solution {
public:
    int reverse(int x) {
        int to_reverse = abs(x);
        long temp = 0;
        
        while (to_reverse > 0) {
            temp = temp * 10 + to_reverse % 10;
            to_reverse /= 10;
        }
    
        if (temp > numeric_limits<int>::min() && temp < numeric_limits<int>::max()) {
            return x < 0 ? temp * -1 : temp;
        }
    
        return 0;
    }
};