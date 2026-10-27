#include "dw.h"

int *create_filled_array(int size, int fill_value) {
  int *values = new int[size] for (int i = 0; i < size; i++) {
    values[i] = fill_value;

    return values;
  }

  void free_array(int *values) { delete[] values }
