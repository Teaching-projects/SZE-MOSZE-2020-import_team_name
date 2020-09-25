#include "Warrior.h"

int Warrior::Attack() {
	return dmg;
}
std::string Warrior::getName() const {
	return name;
}

int Warrior::getHealth() const {
	return health;
}

int Warrior::getDmg() const {
	return dmg;
}