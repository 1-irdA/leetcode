class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }    
        stack<char> stack;

        for (char& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (stack.size() > 0
                    && ((stack.top() == '(' && c == ')')
                    || (stack.top() == '{' && c == '}')
                    || (stack.top() == '[' && c == ']'))) {
                stack.pop();
            } else {
                return false;
            }
        }
        return stack.empty();
    }
};