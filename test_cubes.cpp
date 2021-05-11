#include "cubes.h"

#include <gtest/gtest.h>

TEST(cubes_method2, most_frequent_7)
{
    std::vector<int> numbers;
    filling(numbers, 100000, 2, 6);
    EXPECT_EQ(mostFrequent(numbers), 7);
}
