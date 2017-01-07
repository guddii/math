/**
 *  @file matrix.test.cpp
 *  @brief Unit test for matrix function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "../src/matrix.hpp"
#include "gtest/gtest.h"

TEST(matrixTests, atTest) {

    Matrix m(0.0, 1.0, 2.0, 0.0);
    EXPECT_EQ(m.at(0, 0), 0);
    EXPECT_EQ(m.at(0, 1), 1);
    EXPECT_EQ(m.at(1, 0), 2);
    EXPECT_EQ(m.at(1, 1), 0);

}
