#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Gracz{
public:
	std::string nazwa_gracza = "";
	int exp = 0;
	int lvl = 0;
	int waluta = 0;

	Gracz(std::string nazwa_gracza) {		//Konstruktor gracza z nadaniem nazwy
		this->nazwa_gracza = nazwa_gracza;
	}

	void addExp(int exp) {					//Metoda dodaj¹ca punkty doœwiadczenia

		this->exp += exp;

		if (this->exp >= (lvl + 2) * 7 / 2) {
			this->exp -= ((lvl + 2) * 7 / 2);
			lvl++;
		}
		if (this->exp < 0) {
			lvl--;
			this->exp = ((lvl + 2) * 7 / 2) - abs(this->exp);
		}
		if (lvl <= 0 && this->exp < 0) {
			this->exp = 0;
			lvl = 0;
		}
	}

	void addWaluta(int waluta) {			//Metoda dodaj¹ca walutê
		this->waluta += waluta;
	}

};

class BronGracza {
public:
	std::string nazwa = "Brak broni";
	int damage = 1;
};

BronGracza* brongracza = new BronGracza;