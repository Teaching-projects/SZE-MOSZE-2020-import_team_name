#pragma once
#include "Warrior.h"
#include <iostream>

class Battle {
public:
	static void StartFight(Warrior& warrior1, Warrior& warrior2);
	static std::string GetAttackResult(Warrior& warriorA, Warrior& warriorB);
};