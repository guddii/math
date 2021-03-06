/**
 *  @file matrix.hpp
 *  @brief Interface for matrix function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#ifndef MATH_MATRIX_HPP
#define MATH_MATRIX_HPP

#include "vector.hpp"
#include <iostream>
#include <string>
#include <vector>

class Matrix {

public:

    Matrix(double a11, double a12, double a21, double a22);

    ~Matrix();

    void set(size_t row, size_t col, double value);

    double at(size_t row, size_t col) const;

    double norm() const;

    double &at(size_t row, size_t col);

    Matrix transpose() const;

    Vector multiply(const Vector &b) const;

    void print(std::ostream &out) const;

private:

    std::vector<std::vector<double> > matrix;

};


#endif //MATH_MATRIX_HPP
