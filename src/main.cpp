#include "vector.hpp"
#include "matrix.hpp"

/**
 * Entry point of this program
 */
int main() {

    Matrix m(0.0, 1.0, 2.0, 0.0);
    m.at(0, 0) = -1.0;
    m.print(std::cout);

    Vector(2.0, 0.0).print(std::cout);
    Vector(0.0, 3.0).print(std::cout);

}