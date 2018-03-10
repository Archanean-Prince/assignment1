//This will be for testing conflicts
#include <iostream>
#include <Player.h>
#include <Weapon.h>
#include <Engine.h>
using namespace std;
int main(int argc, char* args[])
{
	//Creates a gun called Galick Gun
	Weapon* galickGun = new Weapon("Galick Gun",true,"Purple Laser");
	//Creates another gun called Static Gun
	Weapon* staticGun = new Weapon("Static Gun",false,"Electricity Wave");

	//The player
	Player* player = new Player();
	//Just change what weapon is in this slot and you'll get a different result.
	player->equipWeapon(*staticGun);
	
	player->checkWeapon(*staticGun);

	//This is a test file for my github repository!
	getchar();
	
	return 0;
}