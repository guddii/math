/**
 *  @file vector.hpp
 *  @brief Interface for vector function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {

public:

    Vector(double x, double y);

    ~Vector();

    double at(size_t index) const;

    void set(size_t index, double value);

    double &at(size_t index);

    double norm() const;

    void print(std::ostream &out) const;

private:

    double coordinates[1];

};

#endif //VECTOR_H
