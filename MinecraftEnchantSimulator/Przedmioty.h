#pragma once
#include <iostream>

class Przedmioty {

};

class Damage {
	int dmg = 1;
	void setterDmg(int dmg) {				//Jak chcesz daæ broñ to ona ma ustalony dmg i tu siê zmienia
		this->dmg = dmg;
	};
	int getterDmg(void) {					//Tego u¿ywasz jak chcesz daæ gdzieœ dmg
		return dmg;
	};
};