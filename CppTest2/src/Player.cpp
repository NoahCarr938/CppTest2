// Use quotes for what you made and angle brackets for library
#include "Player.h"
#include <iostream>

// No return type for constructors
// Initialize with the name and then the value.
// Make sure the values are only called once.
Player::Player() : m_xp(0)
{
	// Dont need below code if we create an initialize list.
	
	// Giving defualt values to the variables in the constructor
	/*m_name = "Player";
	m_health = 100;
	m_xp = 0; 
	m_level = 1;*/
}


// Standard practice to define functions in orders that you declared them
void Player::TakeDamage(float damage)
{
	if (damage <= 0) return;

	SetHealth(GetHealth() - damage);
	if (GetHealth() < 0)
		SetHealth(0);
}

void Player::Heal(float health)
{
	if (health <= 0) return;

	SetHealth(GetHealth() + health);
}

void Player::AddXP(float amount)
{
	if (amount <= 0) return;

	m_xp += amount;
	while (m_xp >= 100)
	{
		m_xp -= 100;
		SetLevel(GetLevel() + 1);
	}
}

void Player::PrintStats()
{
	std::cout << "Name:   " << GetName() << "\n";
	std::cout << "Health: " << GetHealth() << "\n";
	std::cout << "XP:     " << m_xp << "\n";
	std::cout << "Level:  " << GetLevel() << std::endl;
}
