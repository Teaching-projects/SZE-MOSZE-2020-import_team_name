#pragma once
#include <iostream>

class Warrior {
private:
	const std::string name;
	const int dmg;
	int health;
public:
	Warrior(std::string _name, int _health, int _dmg) :name(_name), health(_health), dmg(_dmg) {}
	~Warrior() {};

	std::string getName() const;
	int getHealth() const;
	int getDmg() const;

	void setHealth(int _health) {
		health = _health;
	}
	int Attack();
	static Warrior parseUnit(std::string fName);
};