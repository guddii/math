/**
 *  @file vector.test.cpp
 *  @brief Unit test for vector function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "../src/vector.hpp"
#include "gtest/gtest.h"

TEST(vectorTests, atTests) {

    Vector a(0.0, 2.0);
     EXPECT_EQ(a.at(0), 0);
     EXPECT_EQ(a.at(1), 2);

    Vector b(0.0, 3.0);
     EXPECT_EQ(b.at(0), 0);
     EXPECT_EQ(b.at(1), 3);

}

TEST(vectorTests, setTests) {

    Vector c(0.0, 2.0);
    c.set(1, 5.0);
     EXPECT_EQ(c.at(1), 5);

}

TEST(vectorTests, normTests) {

    Vector d(0.0, 3.0);
     EXPECT_EQ(d.norm(), 3);

}