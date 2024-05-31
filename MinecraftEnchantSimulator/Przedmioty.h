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
		return nazwa + "\t\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t\t | Obra¿enia: " + std::to_string(damage);
	}
};

class KamiennyMiecz : public BronGracza {
public:
	int cena = 25;
	bool dostepny = false;

	KamiennyMiecz() {
		nazwa = "Kamienny miecz";
		damage = 5;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

class ZelzanyMiecz : public BronGracza {
public:
	int cena = 75;
	bool dostepny = false;

	ZelzanyMiecz() {
		nazwa = "¯elazny miecz";
		damage = 6;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

class DiamentowyMiecz : public BronGracza {
public:
	int cena = 200;
	bool dostepny = false;

	DiamentowyMiecz() {
		nazwa = "Diamentowy miecz";
		damage = 7;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

class NetherytowyMiecz : public BronGracza {
public:
	int cena = 500;
	bool dostepny = false;

	NetherytowyMiecz() {
		nazwa = "Netherytowy miecz";
		damage = 8;
	}

	std::string infoSklep() {
		return nazwa + "\t | Cena: " + std::to_string(cena);
	}

	std::string infoEkwipunek() {
		return nazwa + "\t | Obra¿enia: " + std::to_string(damage);
	}
};

DrewnianyMiecz drewnianymiecz;
ZlotyMiecz zlotymiecz;
KamiennyMiecz kamiennymiecz;
ZelzanyMiecz zelaznymiecz;
DiamentowyMiecz diamentowymiecz;
NetherytowyMiecz netherytowymiecz;