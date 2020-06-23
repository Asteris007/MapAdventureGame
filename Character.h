#pragma once
#include <string>
#include <iostream>

using std::string;


class Character
{
public:
	string m_name;
	int  m_hp, m_strenght, m_intelligence;
	int x =1;
	int	y =1;
	int Level = 1;


	Character();
	Character(string name, int m_hp, int m_strenght, int m_intelligence,  int x, int y);
	void SetCharacter(int x, int y);
	void SetName(string name);
	
	void SetHP(int hp);
	void SetStren(int m_strenght);
	void SetIntell(int m_intelligence);
	
	string GetName(); 

	int GetHP();
	int GetStren();
	int GetIntell();

	const int getX(void)const;
	const int getY(void)const;

	virtual void Attack(int m_hp, int m_strenght, int m_intelligence);
	virtual void Defend(int m_hp, int m_strenght, int m_intelligence);
	virtual void LevelUp(int m_hp, int m_strenght, int m_intelligence, int Level);
	virtual void DisplayCh();

};

