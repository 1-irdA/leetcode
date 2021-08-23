class Solution {
public:
    string trim(string s) {
        const string WHITESPACES { " \t\n\r\f" };
        return s.erase(s.find_last_not_of(WHITESPACES) + 1)
                .erase(0, s.find_first_not_of(WHITESPACES));
    }

    string get_last_word(string s) {
        const char DELIM { ' ' };
        vector<string> words;
        stringstream ss(s);
        string a_str;
    
        while (getline(ss, a_str, DELIM)) {
            words.push_back(a_str);
        }
    
        return words[words.size() - 1];
    }
    
    int lengthOfLastWord(string s) {
        return get_last_word(trim(s)).length();
    }
};