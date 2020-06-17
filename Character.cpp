#include "Character.h"
#include <iostream>

Character::Character() : m_EvilLife(100), m_KindLife(50)
{}

void const Character::Status()
{
	std::cout << "Vie de Hector : " << m_KindLife << std::endl;

	std::cout << "Vie Ennemie :" << m_EvilLife << std::endl;
}
