#include "Ennemy.h"
#include <iostream>

Ennemy::Ennemy() : m_Name("Titan")
{
}

void const Ennemy::TectonicHit()
{
	m_KindLife -= 2;
}

void const Ennemy::DivinePunition()
{
	m_KindLife -= 5;
}

void const Ennemy::TitanJudgement()
{
	m_KindLife -= 7;
}

