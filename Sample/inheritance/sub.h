/**
 * sub.h<br>
 * Copyright 2014/05/19 YFurukawa
 */

#ifndef SAMPLE_INHERITANCE_SUB_H_
#define SAMPLE_INHERITANCE_SUB_H_

#include "./base.h"

class sub : public base {
 public:
    //! Constractor
    sub();
    //! Destructor
    virtual ~sub();

 protected:
 private:
};

#endif  // SAMPLE_INHERITANCE_SUB_H_
