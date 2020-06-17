#include "Ennemy.h"
#include <iostream>

/*Constructeur*/

Ennemy::Ennemy() : m_Name("Titan")
{
}

/*Comp�tences ennemies*/

void Ennemy::TectonicHit(Character& target)
{
	target.GetKindDamage(3);
}

void Ennemy::DivinePunition(Character& target)
{
	target.GetKindDamage(5);
}

void Ennemy::TitanJudgement(Character& target)
{
	target.GetKindDamage(7);
}

