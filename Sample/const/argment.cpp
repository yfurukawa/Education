#include <iostream>

int add( const int lhs, int rhs ) {
	return lhs + rhs;
}

int main( int argc, char* argv[] ) {
	int lhs(2);
	int rhs(3);
	std::cout << "Add = " << add( lhs, rhs ) << std::endl;
	return 0;
}

