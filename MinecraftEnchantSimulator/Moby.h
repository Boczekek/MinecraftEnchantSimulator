#pragma once
#include <iostream>
#include <vector>
#include <random>

#include "Przedmioty.h"

class Mobek : public Przedmioty {
public:
	int hp = 0;
	int exp = 0;
	int losowo = 0;
	void setterHp(int hp) {
		this->hp = hp;
	};
	void setterExp(int exp) {
		this->exp = exp;
	};
	int getterHp(void) {
		return hp;
	};
	int getterExp(void) {
		return exp;
	};
	void zadanieDmg(int dmg) {				//Dajesz mu dmg a on ci zmienia hp moba
		int hp = this->hp - dmg;
		setterHp(hp);
	};
	void losowanko(void) {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 3);
		this->losowo = dis(gen);
	};
	void losowyMobek(void) {
		switch (this->losowo) {
		case 0:
			setterHp(20);
			setterExp(5);
			break;
		case 1:
			setterHp(20);
			setterExp(5);
			break;
		case 2:
			setterHp(16);
			setterExp(5);
			break;
		case 3:
			setterHp(20);
			setterExp(5);
			break;
		}
	}
	std::string nazwaMobka(void) {
		std::vector<std::string> mobki{ "Zombie","Skeleton","Spider","Creeper" };
		return mobki[this->losowo];
	}
};


class Zombie : public Mobek {
public:
	int hp = 20;
	int exp = 1;
};

class Skeleton : public Mobek {
	int hp = 20;
	int exp = 1;
};
class Spider : public Mobek {
	int hp = 16;
	int exp = 1;
};
class Creeper : public Mobek {
	int hp = 20;
	int exp = 1;
};

//__________________________________________________________________________________________________________
// Losowy mobek ale tylko nazwa na razie!!!

// int random(void) {
//	std::random_device rd;
//	std::mt19937 gen(rd());
//	std::uniform_int_distribution<> dis(0, 3);
//	int x = dis(gen);
//	return x;
// };


// std::cout << "Twój mobek to: " << mobki[random()];

//__________________________________________________________________________________________________________