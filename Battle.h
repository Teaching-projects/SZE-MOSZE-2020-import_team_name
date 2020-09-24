#pragma once
#include "Warrior.h"
#include <iostream>

class Battle {
public:
	static void StartFight(Warrior& warrior1, Warrior& warrior2);
	static bool GetAttackResult(Warrior& warriorA, Warrior& warriorB);
};