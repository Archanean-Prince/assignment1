#include "Weapon.h"


Weapon::Weapon(string _weaponName, bool _weaponSlot, string _weaponAbility)
{
	weaponName = _weaponName;
	weaponSlot= _weaponSlot;
	weaponAbility = _weaponAbility;
}


Weapon::~Weapon()
{
}

Weapon::Weapon()
{
}
