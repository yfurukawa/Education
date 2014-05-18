#include <iostream>
#include "base.h"

base::base() {
	std::cout << "Constructed base instance" << std::endl;
}

base::~base() {
	std::cout << "Destructed base instance" << std::endl;
}
