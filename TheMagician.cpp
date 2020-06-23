#include "TheMagician.h"
#include "Character.h"

using std::string; using std::cout;


	TheMagician::TheMagician(){}
	TheMagician::TheMagician(Character* ch,int mana) {
		this->ch = ch;
		this->mana=mana;
	}
	void TheMagician::SetMana(int mana) {
		this->mana=mana;
	}
	int TheMagician::GetMana() { return mana; }

	void TheMagician::DisplayM() {
		cout << "Name:" << this->m_name;
		cout << "HP:" << this->m_hp;
		cout << "Strenght: " <<this->m_strenght;
		cout<< "Mana:" << this->mana;
	}




