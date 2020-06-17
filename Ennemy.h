#pragma once

#include "Character.h"

class Ennemy : public Character
{

	/*Donner un nom a l'ennemi*/

	std::string m_Name;

public:

	/*constructeur*/

	Ennemy();
	
	/*Compétences de l'ennemi*/

	void TectonicHit(Character& target);
	void DivinePunition(Character& target);
	void TitanJudgement(Character& target);
};
