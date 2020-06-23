#pragma once
#include "Character.h"

using std::string;
class TheMagician :
	public Character
{
private: 
	int mana;
	Character ch;

public:
	TheMagician();
	TheMagician(Character ch,int mana);
	void SetMana(int mana);
int  GetMana();
void DisplayM();
};

