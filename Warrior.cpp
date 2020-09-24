#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int dmg) {
	this->name = name;
	this->health = health;
	this->dmg = dmg;
}
int Warrior::Attack() {
	return this->dmg;
}
std::string Warrior::getName() {
	return name;
}

int Warrior::getHealth() {
	return health;
}

int Warrior::getDmg() {
	return dmg;
}