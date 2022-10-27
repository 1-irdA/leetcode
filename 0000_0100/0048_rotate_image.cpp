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
            for (int j = 0; j < size / 2; j++) {
                swap(matrix[i][j], matrix[i][size - j - 1]);
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        const int SIZE = matrix.size();
        transpose(matrix, SIZE);
        reverse(matrix, SIZE);
    }
};