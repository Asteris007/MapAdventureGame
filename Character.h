#pragma once
#include <string>
#include <iostream>

using std::string;


class Character
{
private:
	string m_name;
	int m_level, m_hp, m_strenght, m_intelligence,m_money;
	int x =1;
	int	y =1;

public:

	Character();
	Character(string name, int level, int hp, int strenght, int intelligence, int money, int x1, int y1);
	void SetCharacter(int x, int y);
	const int getX(void)const;
	const int getY(void)const;

	/*void attack();
	void defend();
	void levelUp();*/


};

