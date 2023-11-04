#include <iostream>
#include <vector>

// Define a struct to represent non-zero elements
struct SparseElement {
    int row;
    int col;
    int value;
};

int main() {
    int rows = 4; // Number of rows in the matrix
    int cols = 5; // Number of columns in the matrix

    // Create a vector to store non-zero elements as a struct
    std::vector<SparseElement> sparseElements;

    // Add non-zero elements to the vector
    sparseElements.push_back({0, 2, 3});
    sparseElements.push_back({0, 4, 4});
    sparseElements.push_back({1, 2, 5});
    sparseElements.push_back({1, 3, 7});
    sparseElements.push_back({3, 1, 2});
    sparseElements.push_back({3, 2, 6});

    // Initialize a 2D array to represent the sparse matrix
    int sparseMatrix[rows][cols] = {0};

    // Fill in the values from the vector into the sparse matrix
    for (const SparseElement& element : sparseElements) {
        sparseMatrix[element.row][element.col] = element.value;
    }

    // Print the sparse matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << sparseMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
