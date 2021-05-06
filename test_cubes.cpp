#include "cubes.h"

#include <gtest/gtest.h>

TEST(cubes_method2, most_frequent_7)
{
    std::vector<int> numbers;
    uint32_t temp = 0;
        for (uint32_t i = 0; i < 1000; i++)
        {
            numbers.push_back(attempt());
        }
        temp += mostFrequent2(numbers);

    EXPECT_EQ(7, 7);
}
