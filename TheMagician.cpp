#include "TheMagician.h"
#include "Character.h"
#include<iostream>

using std::string; using std::cout;


	TheMagician::TheMagician(){}
	TheMagician::TheMagician(string m_name, int m_hp, int m_strenght, int m_intelligence, int x, int y, int mana) {
		this->m_name = m_name;
		this->m_hp = m_hp;
		this->m_strenght = m_strenght;
		this->m_intelligence = m_intelligence;

		this->x = x;
		this->y = x;
		this->mana=mana;
	}
	void TheMagician::SetMana(int mana) {
		this->mana=mana;
	}
	int TheMagician::GetMana() { return mana; }

	/*void TheMagician::DisplayM() {
		cout << "Name:" <<m_name;
		cout << "HP:" << m_hp;
		cout << "Strenght: " <<m_strenght;
		//cout<< "Mana:" << mana;
		cout << "LEVEL: " << Level;
		system("pause");
	}*/




