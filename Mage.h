#pragma once

#include "Character.h"


class Mage : public Character
{

	int m_MageMana;
	int m_MageShield;

public:
	Mage(std::string MageName);
	void const FireBall();
	void const PrimordialExplosion();
	void const Healing();

};