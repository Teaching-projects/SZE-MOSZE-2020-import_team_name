#pragma once
#include <iostream>

class Warrior {
public:
	std::string name;
	int dmg;
	int health;
	Warrior(std::string name, int health, int dmg);
	int Attack();
};