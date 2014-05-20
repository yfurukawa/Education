/**
 *
 * Copyright 2014 yfurukawa
 *
 */

#include <cstdio>
#include <list>

class hoge {
 public:
  explicit hoge(int f) : fuga_(f) {}
  int getFuga() { return fuga_; }
 private:
  int fuga_;
};

int main(int argc, char* argv[]) {
  std::list<hoge*> array;

  array.push_back(new hoge(2));
  array.push_back(new hoge(3));
  array.push_back(new hoge(4));

  for ( auto ai : array ) {
    printf("%d\n", ai->getFuga());
    delete ai;
  }

  return 0;
}

