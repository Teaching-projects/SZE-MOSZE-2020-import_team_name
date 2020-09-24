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

bool Battle::GetAttackResult(Warrior& warriorA, Warrior& warriorB) {
	if (orderDefault) {
		std::cout << warriorA.getName() << +": HP: " << warriorA.getHealth() << +", DMG: " << warriorA.getDmg() << std::endl;
		std::cout << warriorB.getName() << +": HP: " << warriorB.getHealth() << +", DMG: " << warriorB.getDmg() << std::endl;
		orderDefault = false;
	}
	else {
		std::cout << warriorB.getName() << +": HP: " << warriorB.getHealth() << +", DMG: " << warriorB.getDmg() << std::endl;
		std::cout << warriorA.getName() << +": HP: " << warriorA.getHealth() << +", DMG: " << warriorA.getDmg() << std::endl;
		orderDefault = true;
	}
	std::cout << warriorA.getName() << " -> " << warriorB.getName() << std::endl;

	int warriorAAttkAmt = warriorA.Attack();
	int damage2WarriorB = warriorAAttkAmt;
	damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;

	warriorB.setHealth(((warriorB.getHealth() - damage2WarriorB) <= 0) ? 0 : (warriorB.getHealth() - damage2WarriorB));



	if (warriorB.getHealth() <= 0) { //if any of the Warrior dies then print out at the end...
		if (orderDefault) {
			std::cout << warriorB.getName() << +": HP: " << warriorB.getHealth() << +", DMG: " << warriorB.getDmg() << std::endl;
			std::cout << warriorA.getName() << +": HP: " << warriorA.getHealth() << +", DMG: " << warriorA.getDmg() << std::endl;
		}
		else {
			std::cout << warriorA.getName() << +": HP: " << warriorA.getHealth() << +", DMG: " << warriorA.getDmg() << std::endl;
			std::cout << warriorB.getName() << +": HP: " << warriorB.getHealth() << +", DMG: " << warriorB.getDmg() << std::endl;
		}
		std::cout << warriorB.getName() << " died. " << warriorA.getName() << " wins." << std::endl;
		return true;
	}
	else {
		return false;
	}
}