#include "Player.h"



Player::Player(Weapon _primaryWeaponSlot, Weapon _secondaryWeaponSlot)
{
	primaryWeapon = _primaryWeaponSlot;
	secondaryWeapon = secondaryWeapon;
}



Player::Player()
{
}

Player::~Player()
{
}

void Player::equipWeapon(Weapon desiredWeapon)
{
	primaryWeapon = desiredWeapon;
	string someString = ("I equiped a weapon \n");
	printf("%s\n", someString.c_str());
	
}

string Player::checkWeapon(Weapon checkedWeapon)
{
	std::string checkedName = checkedWeapon.weaponName;

	if (checkedWeapon.weaponSlot == true) {
		printf("This weapon is a primary weapon \n");
		printf("This is the weapon's ability %s \n", checkedWeapon.weaponAbility.c_str());
		printf("The weapon in my primary slot is called %s \n", checkedName.c_str());
	}
	else if (checkedWeapon.weaponSlot==false){
		printf("The weapon in my secondary slot is called %s \n", checkedName.c_str());
		printf("This is the weapon's ability %s \n", checkedWeapon.weaponAbility.c_str());
		printf("This weapon is a secondary weapon \n");
	}

	return checkedName;
}
