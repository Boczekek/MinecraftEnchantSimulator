#pragma once
#include <iostream>
#include <string>

#include "Gracz.h"

class DrewnianyMiecz : public BronGracza {
public:
	int cena = 5;
	bool dostepny = true;

	DrewnianyMiecz() {
		nazwa = "Drewniany miecz";
		damage = 4;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

class ZlotyMiecz : public BronGracza {
public:
	int cena = 6;
	bool dostepny = false;

	ZlotyMiecz() {
		nazwa = "Z³oty miecz";
		damage = 4;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

class KamiennyMiecz : public BronGracza {
public:
	int cena = 6;
	bool dostepny = false;

	KamiennyMiecz() {
		nazwa = "Z³oty miecz";
		damage = 4;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};