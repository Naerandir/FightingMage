#include "Mage.h"
#include <iostream>

Mage::Mage(std::string MageName) : m_MageMana(50), m_MageShield(0)
{

}

void const Mage::FireBall()
{
	m_EvilLife -= 10;
	m_MageMana -= 5;
}

void const Mage::PrimordialExplosion()
{
	m_EvilLife -= 25;
	m_MageMana -= 25;
}

void const Mage::Healing()
{
	m_KindLife += 10;
	m_MageMana += 10;
}

