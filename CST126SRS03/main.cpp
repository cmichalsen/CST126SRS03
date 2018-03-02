// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "elephant.h"
#include "preserve.h"
#include "gps.h"

int main()
{
	// static Preserve preserve; // TODO: Dynamic preserve. 

	Elephant elephant(3'500, Direction::kNorth);
	GPS gps(8, 6);
	elephant.tag(gps);
	elephant.findHerd();
	const auto time{ elephant.getElapsedTime() };
	std::cout << "Herd found in = " << time << std::endl;
	system("pause");
	return 0;
}
