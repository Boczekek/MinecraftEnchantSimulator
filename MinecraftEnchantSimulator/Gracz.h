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

	void addExp(int exp) {					//Metoda dodaj�ca punkty do�wiadczenia

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

	void addWaluta(int waluta) {			//Metoda dodaj�ca walut�
		this->waluta += waluta;
	}

	void zmniejszLVL(int ilosc) {
		for (int i = 0; i < ilosc; i++) {

			exp -= ((lvl + 2) * 7 / 2);

			if (exp >= (lvl + 2) * 7 / 2) {
				exp -= ((lvl + 2) * 7 / 2);
				lvl++;
			}
			if (exp < 0) {
				lvl--;
				exp = ((lvl + 2) * 7 / 2) - abs(exp);
			}
			if (lvl <= 0 && exp < 0) {
				exp = 0;
				lvl = 0;
			}
		}
	}

};

class BronGracza {
public:
	std::string nazwa = "Brak broni";
	int damage = 1;
};

Gracz gracz("Bezimienny");

BronGracza* brongracza = new BronGracza;