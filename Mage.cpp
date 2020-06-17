#include "Mage.h"
#include <iostream>

/*Constructeur*/

Mage::Mage(std::string MageName) : m_MageMana(50)
{

}

/*Compétences du mage*/

void Mage::FireBall(Character& target)
{
	target.GetEvilDamage(10);
	m_MageMana -= 5;
}

void Mage::PrimordialExplosion(Character& target)
{
	target.GetEvilDamage(25);
	m_MageMana -= 25;
}

void Mage::Healing(Character& target)
{
	target.GetKindHeal(10);
	m_MageMana += 10;
}

