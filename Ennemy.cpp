#include "Ennemy.h"
#include <iostream>

/*Constructeur*/

Ennemy::Ennemy() : m_Name("Titan")
{
}

/*Compétences ennemies*/

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

