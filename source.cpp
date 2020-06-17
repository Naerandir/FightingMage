#include <iostream>
#include <string>
#include "Mage.h"
#include "Ennemy.h"


int main()
{
	std::cout << "Hello World ! Time to fight !" << std::endl;

	Mage Hector("Hector");
	Ennemy Titan;
	Character Charac;
	
	Hector.FireBall();

	Charac.Status();
	std::cin.ignore();

	Hector.PrimordialExplosion();
	
	Charac.Status();
	std::cin.ignore();

	Hector.Healing();

	Charac.Status();
	std::cin.ignore();
	
	/*-----------------------------*/

	Titan.DivinePunition();

	Charac.Status();
	std::cin.ignore();

	Titan.TectonicHit();

	Charac.Status();
	std::cin.ignore();
	
	Titan.TitanJudgement();

	Charac.Status();
	std::cin.ignore();

	/*------------------------------*/

	std::cout << "Out" << std::endl;

	std::cin.ignore();

}
