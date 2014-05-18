/**
 * Copyright 2014/05/19 YFurukawa
 *
*/
#include <cstdio>
#include "./base.h"

base::base() {
  printf("Constructed base instance\n");
}

base::~base() {
  printf("Destructed base instance\n");
}
