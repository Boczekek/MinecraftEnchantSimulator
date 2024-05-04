#pragma once
#include <iostream>
#include <vector>
#include <random>

#include "Przedmioty.h"

class Mobek : public Przedmioty {
public:
	int hp = 0;
	int exp = 0;
	void setterHp(int hp) {
		this->hp = hp;
	};
	int getterHp(void) {
		return hp;
	};
	void zadanieDmg(int dmg) {				//Dajesz mu dmg a on ci zmienia hp moba
		int hp = this->hp - dmg;
		setterHp(hp);
	};
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

// std::vector<std::string> mobki{ "Zombie","Skeleton","Spider","Creeper" };
// std::cout << "Twój mobek to: " << mobki[random()];

//__________________________________________________________________________________________________________