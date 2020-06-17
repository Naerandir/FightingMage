#pragma once

#include "Character.h"

class Ennemy : public Character
{
	std::string m_Name;

public:
	Ennemy();
	void const TectonicHit();
	void const DivinePunition();
	void const TitanJudgement();
};
