#include <iostream>
#include <string>
#include "Battle.h"
#include "Warrior.h"

int main() {
	Warrior warriorA("Maple", 150, 10); //name, health, damage...
	Warrior warriorB("Sally", 45, 30);

	Battle::StartFight(warriorA, warriorB);

	std::cin.get();
	return 0;
}