#include "Character.h"
#include<iostream>
#include <windows.h>
#include <stdlib.h>

Character::Character() {

	
		m_name = "Witcher";
		m_level = 1;
		m_hp = 100;
		m_strenght = 10;
		m_intelligence = 10;
		m_money = 140;
		x = 1;
		y = 1;
	}
Character::Character(string name, int level, int hp, int strenght, int intelligence, int money, int x, int y)
{
	m_name = name;
	m_level = level;
	m_hp = hp;
	m_strenght = strenght;
	m_intelligence = intelligence;
	m_money = money;
	this-> x=x;
	this-> y=x;
}

void Character:: SetCharacter(int x, int y) {
	this->x = x;
	this->y = x;
}
const int Character::getX(void)const {
	return x;
}

const int Character::getY(void)const {
	return y;
}