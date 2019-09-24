// add2WithFileAndHeader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "io.h"
#include <iostream>



int main()
{
	int x{readNumber()};
	int y{readNumber()};
    
	int addRes{ x + y };
	writeAnswer(addRes, x, y);

	return 0;
}

