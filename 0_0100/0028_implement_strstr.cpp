class Solution {
public:    
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        
        if (haystack.length() < needle.length()) {
            return -1;
        }
    
        int i, j, temp_i;
    
        for (i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                for (temp_i = i, j = 0; j < needle.length() && haystack[temp_i] == needle[j]; temp_i++, j++);
            
                if (j == needle.length()) {
                    return i;
                }
            }
        }
    
        return -1;
    }
};