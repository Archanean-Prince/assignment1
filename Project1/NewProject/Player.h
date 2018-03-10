#pragma once
#include <string.h>
#include <iostream>
#include "Weapon.h"
using namespace std;
class Player
{
	
public:
	
	Player(Weapon primaryWeaponSlot, Weapon secondaryWeaponSlot);
	Player();
	~Player();
	Weapon primaryWeapon;
	Weapon secondaryWeapon;
	
	void equipWeapon(Weapon desiredWeapon);
	string checkWeapon(Weapon checkedWeapon);
};

