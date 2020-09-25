#include "Warrior.h"
#include <algorithm>
#include <fstream>

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
Warrior Warrior::parseUnit(std::string fName) //handle Json via text seperating
{
	std::ifstream readJson("units/" + fName);
	if (readJson.is_open())
	{
		std::string name, hpText, dmgText;
		readJson.ignore(1, '{');
		readJson.ignore(1, '\n');
		readJson.ignore(1, '\t');
		std::getline(readJson, name, ',');
		name.erase(std::remove(name.begin(), name.end(), '\"'), name.end());
		name.erase(0, 7);
		readJson.ignore(1, '\n');
		readJson.ignore(1, '\t');
		std::getline(readJson, hpText, ',');
		hpText.erase(std::remove(hpText.begin(), hpText.end(), '\"'), hpText.end());
		hpText.erase(0, 5);
		readJson.ignore(1, '\n');
		readJson.ignore(1, '\t');
		std::getline(readJson, dmgText);
		dmgText.erase(std::remove(dmgText.begin(), dmgText.end(), '\"'), dmgText.end());
		dmgText.erase(0, 6);
		readJson.close();
		unsigned int hp = std::stoi(hpText);
		unsigned int dmg = std::stoi(dmgText);
		return Warrior(name, hp, dmg);
	}
	else throw fName;
}