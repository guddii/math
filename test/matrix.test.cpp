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
    EXPECT_EQ(m.at(0, 1), 2);
    EXPECT_EQ(m.at(1, 0), 1);
    EXPECT_EQ(m.at(1, 1), 0);
}

TEST(matrixTests, setTest) {
    Matrix m(0.0, 1.0, 2.0, 0.0);
    m.set(0, 0, 5.0);
    EXPECT_EQ(m.at(0, 0), 5.0);
}

TEST(matrixTests, normTest) {
    Matrix m(0.0, 3.0, 3.0, 0.0);
    EXPECT_EQ(m.norm(), 3);
}