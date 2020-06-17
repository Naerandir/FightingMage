#include <iostream>
#include <string>
#include "Mage.h"
#include "Ennemy.h"


int main()
{
	

	Mage Hector("Hector");
	Ennemy Titan;
	Character Charac;

	Hector.FireBall(Titan);
	Hector.PrimordialExplosion(Titan);

	Titan.DivinePunition(Hector);
	Titan.TectonicHit(Hector);

	Charac.Status();

	/*------------------------------*/

	std::cout << "Out" << std::endl;

	std::cin.ignore();

}