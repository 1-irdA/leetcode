class Solution {
public:
    bool isRowOk(vector<vector<char>>& board, int row, int col, char value) {
        for (int i = 0; i < board.size(); i++) {
            if (i != col && board[row][i] == value) {
                return false;
            }
        }
        return true;
    }

    bool isColOk(vector<vector<char>>& board, int row, int col, char value) {
        for (int i = 0; i < board.size(); i++) {
            if (i != row && board[i][col] == value) {
                return false;
            }
        }
        return true;
    }

    bool isSquareOk(vector<vector<char>>& board, int row, int col, char value) {
        int _i = row - (row % 3);
        int _j = col - (col % 3);  
        
        for (int i = _i; i < _i+3; i++) {
            for (int j =_j; j < _j+3; j++) {
                if (i != row && j != col && board[i][j] == value) {
                    return false;
                }
            }
        }
        return true;
    }

    bool isOk(vector<vector<char>>& board, int row, int col) {
        return isRowOk(board, row, col, board[row][col]) 
            && isColOk(board, row, col, board[row][col])
            && isSquareOk(board, row, col, board[row][col]);
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.' && !isOk(board, i, j)) {
                    return false;
                }
            }
        }
        return true;
    }
};