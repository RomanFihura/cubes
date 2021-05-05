#include "cubes.h"

#include <gtest/gtest.h>

TEST(cubes, most_frequent_7) {
  uint32_t temp = 0;
  uint32_t runs=1000;
  for (uint32_t i = 0; i < runs; i++) {
    temp += mostFrequent(runs);
  }
  double actualrelation = (static_cast<double>(temp) /  (runs));
  
  EXPECT_NEAR(actualrelation, 7, 0.1);
}