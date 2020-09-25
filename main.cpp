#include <iostream>
#include <string>
#include "Battle.h"
#include "Warrior.h"

int main(const int argc, const char** argv) {
	if (argc == 7)
	{
		Warrior warriorA(argv[1], std::stoul(argv[2]), std::stoul(argv[3]));
		Warrior warriorB(argv[4], std::stoul(argv[5]), std::stoul(argv[6]));

		Battle::StartFight(warriorA, warriorB);
	}
	else
	{
		std::cout << "Wrong argument parameters. Please try again. " << std::endl;
	}

	return 0;
}