#include "RotateImage.hpp"

using namespace std;

void RotateImage::rotate(vector<vector<int>> &matrix) {
    reverse(matrix.begin(), matrix.end());

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix.size(); j++)
            swap(matrix[i][j], matrix[j][i]);
    }
}
