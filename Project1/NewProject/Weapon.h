#pragma once
#include <iostream>
using namespace std;
class Weapon
{
public:
	Weapon(string weaponName, bool isPrimaryWeapon, string _WeaponAbility);
	~Weapon();
	Weapon();
	string weaponAbility;
	string weaponName;
	//If this is true it's a primary. If it's false it's a secondary.
	bool weaponSlot;

};

