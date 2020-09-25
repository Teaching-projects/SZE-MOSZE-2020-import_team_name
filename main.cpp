#include <iostream>
#include <string>
#include "Battle.h"
#include "Warrior.h"


int main(const int argc, const char** argv) {
		Warrior warriorA = Warrior::parseUnit(argv[1]);
		Warrior warriorB = Warrior::parseUnit(argv[2]);

		Battle::StartFight(warriorA, warriorB);

	return 0;
}