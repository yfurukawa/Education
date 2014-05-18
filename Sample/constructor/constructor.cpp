/**
 * Copyright 2014/05/19 YFurukawa
 *
*/
#include <cstdio>
#include "./constructor.h"

constructor::constructor() {
  printf("Constructed\n");
}

constructor::~constructor() {
  printf("Destructed\n");
}
