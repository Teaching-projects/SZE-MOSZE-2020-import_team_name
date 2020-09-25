#include "Battle.h"
bool order = true;
/*
void printingOut(Warrior& warrior1, Warrior& warrior2) {
	std::cout << warrior1.getName() << +": HP: " << warrior1.getHealth() << +", DMG: " << warrior1.getDmg() << std::endl;
	std::cout << warrior2.getName() << +": HP: " << warrior2.getHealth() << +", DMG: " << warrior2.getDmg() << std::endl;
}
*/
void Battle::StartFight(Warrior& warrior1, Warrior& warrior2) {

	Warrior* ptrA = &warrior1;
	Warrior* ptrB = &warrior2;

	while (true) {
		if (order) {
			ptrA = &warrior1;
			ptrB = &warrior2;
			order = false;
		}
		else {
			ptrA = &warrior2;
			ptrB = &warrior1;
			order = true;
		}

		if (Battle::GetAttackResult(*ptrA, *ptrB)) {
			break; //kill the entire loop and end the program
		}
		//printingOut(warrior1, warrior2);
		//std::cout << (*ptrA).getName() << " -> " << (*ptrB).getName() << std::endl;
	}
}

bool Battle::GetAttackResult(Warrior& warriorA, Warrior& warriorB) {
	int warriorAAttkAmt = warriorA.Attack();
	int damage2WarriorB = warriorAAttkAmt;
	damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;

	warriorB.setHealth(((warriorB.getHealth() - damage2WarriorB) <= 0) ? 0 : (warriorB.getHealth() - damage2WarriorB));

	if (warriorB.getHealth() <= 0) { //if any of the Warrior dies then print out at the end...
		//printingOut(warriorA, warriorB);
		//std::cout << warriorB.getName() << " died. " << warriorA.getName() << " wins." << std::endl;
		std::cout << warriorA.getName() << " wins. Remaining HP:" << warriorA.getHealth() <<std::endl;
		return true;
	}
	else {
		return false;
	}
}