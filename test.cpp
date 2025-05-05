#include <iostream>
#include <vector>

std::vector<std::vector<int>> transposeMatrix(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Create a new matrix with dimensions swapped
    std::vector<std::vector<int>> transposedMatrix(cols, std::vector<int>(rows));

    // Iterate through the original matrix and swap indices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    return transposedMatrix;
}

int main() {
    std::vector<stdesection> matrix = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> transposed = transposeMatrix(matrix);

    // Print the transposed matrix
    for (const auto& row : transposed) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}