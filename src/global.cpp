/**
 * @brief Calculate the scalar product of two vectors
 * @param a Vector a
 * @param b Vector b
 * @return The product of a and b
 */
double dot(const Vector &a, const Vector &b) {
    double r = 0;
    r = r + a.at(0) * b.at(0);
    r = r + a.at(1) * b.at(1);
    return r;
}

/**
 * @brief Calculate the sum of two vectors
 * @param a Vector a
 * @param b Vector b
 * @return The sum of a and b
 */
Vector add(const Vector &a, const Vector &b) {
    double x = a.at(0) + b.at(0);
    double y = a.at(1) + b.at(1);
    return Vector(x, y);
}
