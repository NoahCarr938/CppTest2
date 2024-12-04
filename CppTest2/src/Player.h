#pragma once
class Player
{
	// Everything after this will be public until we make another one.
public:
	// Constructor
	Player();
	// Destructor
	~Player();

	void TakeDamage(float damage);
	void Heal(float health);
	void AddXP(float amount);
	void PrintStats();

	// Make it const because we are not changing anything
	// Getters will be const and setters will not
	const char* GetName() const { return m_name; }
	void SetName(const char* name) { m_name = name; }
	float GetHealth() const { return m_health; }
	float GetXP() const { return m_xp; }
	int GetLevel() const { return m_level; }

private:
	// m_ is naming convention for this is a private variable
	const char* m_name;
	float m_health;
	float m_xp;
	int m_level;
};