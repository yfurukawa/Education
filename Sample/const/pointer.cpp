#include <iostream>

int add( int* lhs, int* rhs ) {
	int lhs_(7);
	lhs = &lhs_;
	return *lhs + *rhs;
}

int main( int argc, char* argv[] ) {
	int lhs(2);
	int rhs(3);
	std::cout << "Add = " << add( &lhs, &rhs ) << std::endl;
	return 0;
}

