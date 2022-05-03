// C++ headers
#include <iostream>
#include <cstdlib>
#include <ctime>

// Custom headers
#include "src/misc.hpp"

int main(int argc, char* argv[])
{
	const char characters[] = "1234567890!@#$%^&*()abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int string_length = sizeof(characters) - 1;

	int passwordLength;
	
	std::cout << "How long should the password be: ";
	std::cin >> passwordLength;
	
	srand(time(0));
	Misc::clearScreen();
	
	std::cout << "Password: ";
	
	for (int i = 0; i < passwordLength; i++)
		std::cout << characters[std::rand() % string_length];
		
	return 0;
}