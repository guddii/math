/**
 *  @file vector.test.cpp
 *  @brief Unit test for vector function prototypes.
 *
 *  @author Florian Gudat (guddii)
 *  @see https://github.com/guddii/math
 *  @bug https://github.com/guddii/math/issues
 */

#include "../src/vector.hpp"
#include "../src/global.cpp"
#include "gtest/gtest.h"

TEST(vectorTests, atTest) {
    Vector a(0.0, 2.0);
    EXPECT_EQ(a.at(0), 0);
    EXPECT_EQ(a.at(1), 2);
    Vector b(0.0, 3.0);
    EXPECT_EQ(b.at(0), 0);
    EXPECT_EQ(b.at(1), 3);
}

TEST(vectorTests, setTest) {
    Vector c(0.0, 2.0);
    c.set(1, 5.0);
    EXPECT_EQ(c.at(1), 5);
}

TEST(vectorTests, normTest) {
    Vector d(0.0, 3.0);
    EXPECT_EQ(d.norm(), 3);
}

TEST(vectorTests, dotTest) {
    Vector e(0.0, 3.0);
    Vector f(0.0, 3.0);
    double r = dot(e, f);
    EXPECT_EQ(r, 9);
}

TEST(vectorTests, addTest) {
    Vector e(3.0, 3.0);
    Vector f(6.0, 3.0);
    Vector g = add(e, f);
    EXPECT_EQ(g.at(0), 9);
    EXPECT_EQ(g.at(1), 6);
}