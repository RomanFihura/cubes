#include "cubes.h"

#include <gtest/gtest.h>

TEST(cubes_method2, most_frequent_7)
{
    std::vector<int> numbers;
    uint32_t temp = 0;
    uint32_t runs = 500;
    for (uint32_t i = 0; i < runs; i++)
    {
        for (uint32_t i = 0; i < 1000; i++)
        {
            numbers.push_back(attempt());
        }
        temp += mostFrequent2(numbers);
        numbers.clear();
    }
    double actualrelation = (static_cast<double>(temp) / runs);
    EXPECT_NEAR(actualrelation, 7, 0.2);
}
