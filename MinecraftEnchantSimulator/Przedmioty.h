#pragma once
#include <iostream>

class Przedmioty {

};

class Damage {
	int dmg = 1;
	void setterDmg(int dmg) {				//Jak chcesz da� bro� to ona ma ustalony dmg i tu si� zmienia
		this->dmg = dmg;
	};
	int getterDmg(void) {					//Tego u�ywasz jak chcesz da� gdzie� dmg
		return dmg;
	};
};