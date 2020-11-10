#pragma once
#include "Actor.h"
class Player : public Actor
{
public:
	std::string name;
	int xp;
	int hp;
	int level;

	Player() : name{ " " }, xp{ 100 }, hp{ 100 }, level{ 1 } {

	}
	Player(std::string getname) : name{ getname }, xp{ 100 }, hp{ 100 }, level{ 1 } {

	}
	void displayMessage(std::string mess);
	~Player(){

	}

};

