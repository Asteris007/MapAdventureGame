#include "Enemy.h"
#include "theMap.h"

Enemy::Enemy(){}
Enemy::~Enemy(){}

Enemy::Enemy(int e_hp, int e_strenght, int e_intelligence, int x, int y) {
	this->e_hp= e_hp;
	this->e_strenght= e_strenght;
	this->e_intelligence=e_intelligence;
	this->x=x ;
	this->y=y ;
}

void Enemy::setEHP(int e_hp) {
	this->e_hp=e_hp;
}
void Enemy::setEStren(int e_strenght) {
	this->e_strenght=e_strenght;
}
void Enemy::setEIntell(int e_intelligence) {
	this->e_intelligence=e_intelligence ;
}
void Enemy::setEX(int x) {
	this->x=x;
}
void Enemy::setEY(int y) {
	this->y=y;
}

int Enemy::getEHP() { return e_hp; }
int Enemy::getESren() { return e_strenght; }
int Enemy::getEIntell() { return e_intelligence; }
int Enemy::getEX() { return x; }
int Enemy::getEY() { return y; }

void Enemy::EAttack(int e_hp, int e_strenght, int e_intelligence) {
	e_hp += 4;
	e_strenght += 3;
	e_intelligence += 1;
}
void Enemy::EDefend(int e_hp, int e_strenght, int e_intelligence) {
	e_hp -= 8;
	e_strenght -= 6;
	e_intelligence -= 4;
}
