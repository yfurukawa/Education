#include <iostream>
#include "constructor.h"

constructor::constructor() {
	std::cout << "Constructed" << std::endl;
}

constructor::~constructor() {
	std::cout << "Destructed" << std::endl;
}
