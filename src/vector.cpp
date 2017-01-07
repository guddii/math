/**
 *  @file vector.cpp
 *  @brief Vector function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "vector.hpp"
#include "cmath"

/**
 *  @brief Vector constructor
 *
 *  Construct an array containing
 *  the given parameters.
 *
 *  @param x X value
 *  @param y Y value
 */
Vector::Vector(double x, double y) {
    this->set(0, x);
    this->set(1, y);
}

Vector::~Vector() {}

/**
 *  @brief Get values from vector
 *
 *  Get values from the vector with
 *  read only access.
 *
 *  @param index Index within the array
 *  @return Value form array
 */
double Vector::at(size_t index) const {
    return coordinates[index];
};

/**
 *  @brief Set values within the vector
 *  @param index Index within the array
 *  @param value The new value
 */
void Vector::set(size_t index, double value) {
    coordinates[index] = value;
}

/**
 *  @brief Get values from vector
 *
 *  Get or set values from the vector with
 *  w/o copying the array.
 *
 *  @param index Index within the array
 *  @return Value form array
*/
double &Vector::at(size_t index) {
    return coordinates[index];
}

/**
 * @brief Calculate the euclidean norm
 *
 * Calculate the euclidean norm from the
 * values within the vector.
 *
 * @return The euclidean norm
 */
double Vector::norm() const {
    return sqrt(coordinates[0] * coordinates[0] + coordinates[1] * coordinates[1]);
}

/**
 * Print values on any stream
 * @param out The stream to be printed on
 */
void Vector::print(std::ostream &out) const {
    out << "(" << coordinates[0] << " "
        << coordinates[1] << ")" << std::endl;
}
