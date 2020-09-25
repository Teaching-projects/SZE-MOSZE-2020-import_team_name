#include "Battle.h"
bool order = true;

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
	}
}

bool Battle::GetAttackResult(Warrior& warriorA, Warrior& warriorB) {
	int warriorAAttkAmt = warriorA.Attack();
	int damage2WarriorB = warriorAAttkAmt;
	damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;

	warriorB.setHealth(((warriorB.getHealth() - damage2WarriorB) <= 0) ? 0 : (warriorB.getHealth() - damage2WarriorB));

	if (warriorB.getHealth() <= 0) { //if any of the Warrior dies then print out at the end...
		std::cout << warriorA.getName() << " wins. Remaining HP:" << warriorA.getHealth() <<std::endl;
		return true;
	}
	else {
		return false;
	}
}