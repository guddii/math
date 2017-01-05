/**
 *  @file vector.test.cpp
 *  @brief Unit test for vector function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "vector.hpp"
#include "gtest/gtest.h"
#include "iostream"

/**
 * @brief Test print output
 *
 * Test the inizialisation of a
 * two dimensional vector and its
 * print function.
 */
TEST(printTest, vectorTests) {

    Vector a(2.0, 0.0);
    std::stringstream as;
    a.print(as);
    EXPECT_EQ("(2, 0)", as.str());

    Vector b(0.0, 3.0);
    std::stringstream bs;
    b.print(bs);
    EXPECT_EQ("(2, 0)", bs.str());

}
