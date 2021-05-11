#include "cubes.h"

#include <gtest/gtest.h>

TEST(dice_roll, cubes2_cube_faces6)
{
    EXPECT_EQ(mostFrequent(100000,2,6), 7);
}
