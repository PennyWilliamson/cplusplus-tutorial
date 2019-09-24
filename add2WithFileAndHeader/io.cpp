#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter an interger: ";
	int a{ 0 };
	std::cin >> a;
	return a;
}

void writeAnswer(int ans, int first, int sec)
{
	std::cout << first << " + " << sec << " is " << ans << '\n';
}