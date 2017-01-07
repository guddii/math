/**
 *  @file matrix.cpp
 *  @brief Matrix function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "matrix.hpp"
#include "cmath"

/**
 *  @brief Matrix constructor
 *
 *  Construct a matrix containing
 *  the given parameters.
 *
 * @param a11 a_11 Value
 * @param a12 a_12 Value
 * @param a21 a_21 Value
 * @param a22 a_22 Value
 */
Matrix::Matrix(double a11, double a12, double a21, double a22) {

    matrix.resize(2);

    matrix[0].resize(2);
    this->set(0, 0, a11);
    this->set(0, 1, a21);

    matrix[1].resize(2);
    this->set(1, 0, a12);
    this->set(1, 1, a22);

}

/**
 * @brief Set values within the matrix
 * @param row Row within the matrix
 * @param col Column within the matrix
 * @param value value The new value
 * @return Value form matrix
 */
void Matrix::set(size_t row, size_t col, double value) {
    matrix[row][col] = value;
}

/**
 *  @brief Get values from matrix
 *
 *  Get values from the matrix with
 *  read only access.
 *
 * @param row Row within the matrix
 * @param col Column within the matrix
 * @return Value form matrix
 */
double Matrix::at(size_t row, size_t col) const {
    return matrix[row][col];
}

/**
 * @brief Calculate the euclidean norm
 *
 * Calculate the euclidean norm from the
 * values within the matrix.
 *
 * @return The euclidean norm
 */
double Matrix::norm() const {
    double n = 1;
    for (int j = 0; j < 2; ++j) {
        double helper = 0;
        for (int i = 0; i < 2; ++i) {
            helper = helper + matrix[i][j];
        }
        n = n * helper;
    }
    return sqrt(n);
}

/**
 *  @brief Get values from matrix
 *
 *  Get or set values from the matrix with
 *  w/o copying the array.
 *
 * @param row Row within the matrix
 * @param col Column within the matrix
 * @return Value form matrix
 */
double &Matrix::at(size_t row, size_t col) {
    return matrix[row][col];
}

/**
 * @brief Transpose a matrix
 * @return A transposed matrix
 */
Matrix Matrix::transpose() const {
    return *this;
}

/**
 * Print values on any stream
 * @param out The stream to be printed on
 */
void Matrix::print(std::ostream &out) const {
    out << "(";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            out << matrix[i][j];
            if (!(i == 1 && j == 1)) {
                out << " ";
            }
        }
    }
    out << ")" << std::endl;
}

/**
 * @brief Multiply a matrix and a vector
 * @param b A vector object
 * @return The product
 */
Vector Matrix::multiply(const Vector &b) const {
    // TODO : Add logic
    return b;
}
