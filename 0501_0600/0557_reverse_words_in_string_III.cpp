class Solution {
public:
    string reverseWords(string s) {
        stringstream ss { s };
        string item, res;
        
        while (getline(ss, item, ' ')) {
            reverse(item);
            res += item + ' ';
        }
        return res.substr(0, res.size() - 1);
    }
    
    void reverse(string &toReverse) {
        int n = toReverse.size();
        
        for (int i = 0; i < n / 2; i++) {
            char tmp = toReverse[i];
            toReverse[i] = toReverse[n - i - 1];
            toReverse[n - i - 1] = tmp;
        }   
    }
};