#include "dw.h"
#include <gtest/gtest.h>

TEST(CreateFilledArray, FillsArrayWithValue) {
  int *values = create_filled_array(5, 9);
  for (int i = 0; i < 5; i++) {
    EXPECT_EQ(values[i], 9);
  }
  free_array(values);
}

TEST(CreateFilledArray, HandlesSingleElement) {
  int *values = create_filled_array(1, -3);
  EXPECT_EQ(values[0], -3);
  free_array(values);
}
