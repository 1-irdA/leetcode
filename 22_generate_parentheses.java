class Solution {
    public List<String> generateParenthesis(int n) {
        ArrayList<String> parenthesis = new ArrayList<>();
        addParenthesis(parenthesis, "", 0, 0, n);
        return parenthesis;
    }
    
    public void addParenthesis(ArrayList<String> parenthesis, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            parenthesis.add(current);
            return;
        }
    
        if (open < max) {
            addParenthesis(parenthesis, current + "(", open + 1, close, max);
        }
    
        if (close < open) {
            addParenthesis(parenthesis, current + ")", open, close + 1, max);
        }
    }
}