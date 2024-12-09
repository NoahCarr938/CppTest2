#pragma once

class Character
{
	// Now the class is abstract and cannot be created
	// Make an abstract class by making its constructor private
	// Make it protected because it needs to be called by its child's class
protected:
	Character() = default;
public:
	~Character() = default;


	virtual void TakeDamage(float damage) {}
	// If you sent a function equal to 0, it means the function exists but it is null, so it must be overriden.
	// Pure virtual is an abstract function
	// Abstract function must be impleneted by a child class
	virtual void PrintStats() = 0; // Pure Virtual
	const char* GetName() const { return m_name; }
	void SetName(const char* name) { m_name = name; }
	float GetHealth() const { return m_health; }
	int GetLevel() const { return m_level; }

protected:
	void SetHealth(float health) { m_health = health; }
	void SetLevel(int level) { m_level = level; }

private:
	const char* m_name;
	float m_health;
	int m_level;
};