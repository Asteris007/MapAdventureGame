#pragma once
#include <iostream>


class Enemy
{
public:
	int e_hp;
	int e_strenght;
	int e_intelligence;
	int x, y;


	Enemy();
	~Enemy();
	Enemy(int e_hp, int e_strenght, int e_intelligence, int x, int y);
	void setEHP(int e_hp);
	void setEStren(int e_strenght);
	void setEIntell(int e_intelligence);
	void setEX(int x);
	void setEY(int y);

	int getEHP();
	int getESren();
	int getEIntell();
	int getEX();
	int getEY();

	virtual void EAttack(int e_hp, int e_strenght, int e_intelligence);
	virtual void EDefend(int e_hp, int e_strenght, int e_intelligence);
	

};

