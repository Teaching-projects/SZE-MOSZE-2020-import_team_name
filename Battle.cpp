#include "Battle.h"

int orderDefault = true;

void Battle::StartFight(Warrior& warrior1, Warrior& warrior2) {
	while (true) {
		if (Battle::GetAttackResult(warrior1, warrior2)) {
			break; //kill the entire loop and end the program
		}
		if (Battle::GetAttackResult(warrior2, warrior1)) { //warrior1 is gonna get the chance to attack warrior2
			break;
		}
	}
}

std::string Battle::GetAttackResult(Warrior& warriorA, Warrior& warriorB) {
	if (orderDefault) {
		std::cout << warriorA.name << +": HP: " << warriorA.health << +", DMG: " << warriorA.dmg << std::endl;
		std::cout << warriorB.name << +": HP: " << warriorB.health << +", DMG: " << warriorB.dmg << std::endl;
		orderDefault = false;
	}
	else {
		std::cout << warriorB.name << +": HP: " << warriorB.health << +", DMG: " << warriorB.dmg << std::endl;
		std::cout << warriorA.name << +": HP: " << warriorA.health << +", DMG: " << warriorA.dmg << std::endl;
		orderDefault = true;
	}
	std::cout << warriorA.name << " -> " << warriorB.name << std::endl;

	int warriorAAttkAmt = warriorA.Attack();
	int damage2WarriorB = warriorAAttkAmt;
	damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;

	warriorB.health = ((warriorB.health - damage2WarriorB) <= 0) ? 0 : (warriorB.health - damage2WarriorB);



	if (warriorB.health <= 0) {
		if (orderDefault) {
			std::cout << warriorB.name << +": HP: " << warriorB.health << +", DMG: " << warriorB.dmg << std::endl;
			std::cout << warriorA.name << +": HP: " << warriorA.health << +", DMG: " << warriorA.dmg << std::endl;
		}
		else {
			std::cout << warriorA.name << +": HP: " << warriorA.health << +", DMG: " << warriorA.dmg << std::endl;
			std::cout << warriorB.name << +": HP: " << warriorB.health << +", DMG: " << warriorB.dmg << std::endl;
		}
		std::cout << warriorB.name << " died. " << warriorA.name << " wins." << std::endl;
		return true;
	}
	else {
		return false;
	}
}