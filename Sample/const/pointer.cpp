/**
 * Copyright 2014/05/19 YFurukawa
 *
*/
#include <cstdio>

int add(int* lhs, int* rhs) {
  int lhs_(7);
  lhs = &lhs_;
  return *lhs + *rhs;
}

int main(int argc, char* argv[]) {
  int lhs(2);
  int rhs(3);
  printf("Add = %d\n", add(&lhs, &rhs));
  return 0;
}

