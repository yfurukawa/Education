#include <iostream>
#include "sub.h"


sub::sub() {
	std::cout << "Constructed sub instance" << std::endl;
}

sub::~sub() {
	std::cout << "Destructed sub instance" << std::endl;
}
