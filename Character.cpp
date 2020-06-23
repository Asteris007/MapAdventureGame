#include "Character.h"
#include<iostream>
#include <windows.h>
#include <stdlib.h>

using std::string;

Character::Character() {
	}
Character::Character(string m_name,  int m_hp, int m_strenght, int m_intelligence, int x, int y)
{
	this-> m_name=m_name;
	
	this->m_hp=m_hp;
	this->m_strenght=m_strenght;
	this->m_intelligence=m_intelligence;

	this-> x=x;
	this-> y=x;


}

void Character::SetName(string m_name) {
	this->m_name=m_name;
}



void Character::SetHP(int m_hp) {
	this->m_hp=m_hp;
}
void Character::SetStren(int m_strenght) {
	this->m_strenght= m_strenght ;
}
void Character::SetIntell(int intell) {
	this->m_intelligence= m_intelligence;
}

string Character::GetName() {
	return m_name;
}


int Character::GetHP() { return m_hp; }
int Character::GetStren() { return m_strenght; }
int Character::GetIntell() { return m_intelligence; }

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

void Character::Attack(int m_hp, int m_strenght, int m_intelligence) {
	m_hp += 8;
	m_strenght += 6;
	m_intelligence += 4;
}

void Character::Defend(int m_hp, int m_strenght, int m_intelligence) {
	m_hp -= 4;
	m_strenght -= 3;
	m_intelligence -= 1;

}

void Character::LevelUp(int m_hp, int m_strenght, int m_intelligence,int Level) {
	m_hp = ((10 * m_hp) / 100) + m_hp;
	m_strenght = ((10 * m_strenght) / 100) + m_strenght;
	m_intelligence = ((10 * m_intelligence) / 100) + m_intelligence;
	Level++;
}

