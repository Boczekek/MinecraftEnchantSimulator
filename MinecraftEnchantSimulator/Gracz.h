#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Gracz {
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
	}

	int getExp(void) {						//Getter expa
		return exp;
	}

	void addWaluta(int waluta) {			//Metoda dodaj¹ca walutê
		this->waluta += waluta;
	}

	int getWaluta(void) {					//Getter waluty
		return waluta;
	}

	void lvlChange() {						//Przeliczanie exp na lvl
		if (exp >= (lvl + 2) * 7 / 2) {
			exp -= ((lvl + 2) * 7 / 2);
			lvl++;
		}
		if (exp < 0) {
			lvl--;
			exp = ((lvl + 2) * 7 / 2) - abs(exp);
		}
	}
};