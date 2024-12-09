#pragma once
#include "Character.h"
class Player : public Character
{
	// Everything after this will be public until we make another one.
public:
	// Constructor
	Player();
	// Destructor
	// Looks better and shows that this is supposed to be the default constructor.
	~Player() = default;

	// Functions
	void TakeDamage(float damage) override;
	void Heal(float health);
	void AddXP(float amount);
	void PrintStats() override;

	// Make it const because we are not changing anything
	// Getters will be const and setters will not

	float GetXP() const { return m_xp; }


private:
	// m_ is naming convention for this is a private variable
	float m_xp;
};