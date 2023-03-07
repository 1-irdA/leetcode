class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        flipImage(image);
        invertImage(image);
        return image;
    }

    void flipImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int n = image[i].size();
            for (int j = 0; j < n / 2; j++) {
                swap(image[i][j], image[i][n - j - 1]);
            }
        }
    }

    void invertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < image[i].size(); j++) {
                image[i][j] = 1 - image[i][j];
            }
        }
    }
};