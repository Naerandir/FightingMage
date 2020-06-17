#pragma once

#include "Character.h"


class Mage : public Character
{
	/*Les stats du mage*/

	int m_MageMana;

public:

	/*constructeur*/

	Mage(std::string MageName);

	/*Comp�tence du mage*/

	void FireBall(Character &target);
	void PrimordialExplosion(Character& target);
	void Healing(Character& target);

};