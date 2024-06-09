#pragma once
#include <iostream>

void kupMiecz(int miecz) {
	switch (miecz) {
	case 1:
		drewnianymiecz.kupiony = true;
		listaBroni[0] += "\t[KUPIONY]";
		listaEkpitunek.push_back(drewnianymiecz.infoEkwipunek());
		gracz.addWaluta(-drewnianymiecz.cena);
		brongracza = &drewnianymiecz;			//dla testu bo nie ma ekwipunku
		if (zlotymiecz.dostepny == false) {
			zlotymiecz.dostepny = true;
			listaBroni.push_back(zlotymiecz.infoSklep());
		}
		break;
	case 2:
		zlotymiecz.kupiony = true;
		listaBroni[1] += "\t[KUPIONY]";
		listaEkpitunek.push_back(zlotymiecz.infoEkwipunek());
		gracz.addWaluta(-zlotymiecz.cena);
		brongracza = &zlotymiecz;			//dla testu bo nie ma ekwipunku
		if (kamiennymiecz.dostepny == false) {
			kamiennymiecz.dostepny = true;
			listaBroni.push_back(kamiennymiecz.infoSklep());
		}
		break;
	case 3:
		kamiennymiecz.kupiony = true;
		listaBroni[2] += "\t[KUPIONY]";
		listaEkpitunek.push_back(kamiennymiecz.infoEkwipunek());
		gracz.addWaluta(-kamiennymiecz.cena);
		brongracza = &kamiennymiecz;			//dla testu bo nie ma ekwipunku
		if (zelaznymiecz.dostepny == false) {
			zelaznymiecz.dostepny = true;
			listaBroni.push_back(zelaznymiecz.infoSklep());
		}
		break;
	case 4:
		zelaznymiecz.kupiony = true;
		listaBroni[3] += "\t[KUPIONY]";
		listaEkpitunek.push_back(zelaznymiecz.infoEkwipunek());
		gracz.addWaluta(-zelaznymiecz.cena);
		brongracza = &zelaznymiecz;			//dla testu bo nie ma ekwipunku
		if (diamentowymiecz.dostepny == false) {
			diamentowymiecz.dostepny = true;
			listaBroni.push_back(diamentowymiecz.infoSklep());
		}
		break;
	case 5:
		diamentowymiecz.kupiony = true;
		listaBroni[4] += "\t[KUPIONY]";
		listaEkpitunek.push_back(diamentowymiecz.infoEkwipunek());
		gracz.addWaluta(-diamentowymiecz.cena);
		brongracza = &diamentowymiecz;			//dla testu bo nie ma ekwipunku
		if (netherytowymiecz.dostepny == false) {
			netherytowymiecz.dostepny = true;
			listaBroni.push_back(netherytowymiecz.infoSklep());
		}
		break;
	case 6:
		netherytowymiecz.kupiony = true;
		listaBroni[5] += "\t[KUPIONY]";
		listaEkpitunek.push_back(netherytowymiecz.infoEkwipunek());
		gracz.addWaluta(-netherytowymiecz.cena);
		brongracza = &netherytowymiecz;			//dla testu bo nie ma ekwipunku
		break;
	}
}