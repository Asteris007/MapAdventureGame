#pragma once
#include "Character.h"

using std::string;
class TheMagician :
	public Character
{
private: 
	int mana;
	

public:
	TheMagician();
	TheMagician(string m_name, int m_hp, int m_strenght, int m_intelligence, int x, int y,int mana);
	void SetMana(int mana);
int  GetMana();
void DisplayM();
};

