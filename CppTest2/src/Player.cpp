// Use quotes for what you made and angle brackets for library
#include "Player.h"
#include <iostream>

// No return type for constructors
Player::Player()
{
	m_name = "Player";
	m_health = 100;
	m_xp = 0; 
	m_level = 1;
}

// No return type for destructors
Player::~Player()
{

}

// Standard practice to define functions in orders that you declared them
void Player::TakeDamage(float damage)
{
	if (damage <= 0) return;

	m_health -= damage;
	if (m_health < 0)
		m_health = 0;
}

void Player::Heal(float health)
{
	if (health <= 0) return;

	m_health += health;
}

void Player::AddXP(float amount)
{
	if (amount <= 0) return;

	m_xp += amount;
	while (m_xp >= 100)
	{
		m_xp -= 100;
		m_level++;
	}
}

void Player::PrintStats()
{
	std::cout << "Name:   " << m_name << "\n";
	std::cout << "Health: " << m_health << "\n";
	std::cout << "XP:     " << m_xp << "\n";
	std::cout << "Level:  " << m_level << std::endl;
}
