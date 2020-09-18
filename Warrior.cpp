#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int dmg) {
	this->name = name;
	this->health = health;
	this->dmg = dmg;
}
int Warrior::Attack() {
	return this->dmg;
}