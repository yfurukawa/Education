/**
 *
 * Copyright 2014 yfurukawa
 *
 */

#include <cstdio>

int main(int argc, char* argv[]) {
  int array[5] = {1, 2, 3, 4, 5};

  for (auto a : array) {
    printf("%d\n", a);
  }

  return 0;
}

