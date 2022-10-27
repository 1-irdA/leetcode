class Solution {
public:

    void transpose(vector<vector<int>>& matrix, const int size) {
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void reverse(vector<vector<int>>& matrix, const int size) {
        for (int i = 0; i < size; i++) {
            for (int start = 0, end = size - 1; start < end; start++, end--) {
                swap(matrix[i][start], matrix[i][end]);
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        const int SIZE = matrix.size();
        transpose(matrix, SIZE);
        reverse(matrix, SIZE);
    }
};