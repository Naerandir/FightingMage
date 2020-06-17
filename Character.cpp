#include "Character.h"
#include <iostream>

/*Constructeur*/

Character::Character() : m_EvilLife(100), m_KindLife(50)
{}

/*Récupération des modificateurs de vies des protagonistes*/

void Character::GetEvilDamage(unsigned int Damage)
{
	m_EvilLife -= Damage;
}

void Character::GetKindDamage(unsigned int Damage)
{
	m_KindLife -= Damage;
}

void Character::GetKindHeal(unsigned int Heal)
{
	m_KindLife += Heal;
}

/*Statut des deux combattant*/

void const Character::Status()
{
	std::cout << "Vie de Hector : " << m_KindLife << std::endl;

	std::cout << "Vie Ennemie :" << m_EvilLife << std::endl;
}
