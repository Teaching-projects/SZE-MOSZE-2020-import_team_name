#pragma once
#include <iostream>

class Warrior {
private:
	std::string name;
	int dmg;
	int health;
public:
	std::string getName();
	int getHealth();
	int getDmg();
	void setHealth(int _health) {
		health = _health;
	}
	Warrior(std::string name, int health, int dmg);
	int Attack();
};