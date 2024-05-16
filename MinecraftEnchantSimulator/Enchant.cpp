#include <iostream>
#include <string>

#include "Menu.h"
#include "Gracz.h"
#include "Moby.h"
#include "Przedmioty.h"

void wczytajDane() {							//Funkcja wczytująca zapis gry
}

int main() {
	setlocale(LC_ALL, "polish");
	Mobek mobek;
	Gracz gracz("Bezimienny");
	mobek.losowyMobek();
	std::string decyzja;

	do {
		decyzja = menuGlowne();
		if (decyzja == "1") {					//"NOWA GRA"
			gracz.nazwa_gracza=(podajNazwe());
		}
		else if (decyzja == "2") {				//"WCZYTAJ ZAPIS"
			wczytajDane();
		}
		else if (decyzja == "3") {				//"WYJŚCIE"
			return 0;
		}
		else {
			decyzja = "0";
		}
	} while (decyzja == "0");

	do {
		decyzja = menuGry(gracz.nazwa_gracza, gracz.lvl, gracz.waluta);
		if (decyzja == "1") {												//"Idź do expiarki"
			do {
				decyzja = menuExpiarki(gracz.nazwa_gracza, gracz.lvl, gracz.waluta, gracz.exp, mobek.getterHp(), mobek.nazwaMobka());
				if (decyzja == "1") {
					mobek.zadanieDmg(3);
					if(mobek.getterHp() <= 0) {
						gracz.addExp(mobek.getterExp());
						gracz.addWaluta(1);
						mobek.losowyMobek();
					}
				}
			} while (decyzja != "0");
		}
		else if (decyzja == "2") {											//"Idź do sklepu"
			do {
				decyzja = menuSklepu(gracz.nazwa_gracza, gracz.lvl, gracz.waluta);
				if (decyzja == "1") {
					do {
						decyzja = sklepBronie(gracz.nazwa_gracza, gracz.lvl, gracz.waluta);
					} while (decyzja != "0");
					decyzja = "";
				}
			} while (decyzja != "0");
		}
		else if (decyzja == "3") {											//"Enchantuj broń"
		}
		else if (decyzja == "4") {											//"Organizuj ekwipunek"
		}
		else if (decyzja == "5") {											//"Wróć do menu głównego"
			main();
		}
		else {
			decyzja = "0";
		}
	} while (decyzja == "0");

	return 0;
}

/*
Giga plan na Minecraft Enchant Simulator

Ogólne założenie:
Gra typu tycoon z nieskończoną progresją.

Menu:
- Menu główne z opcją rozpoczęcia nowej gry, wczytania zapisu i wyjścia z gry.
- Menu w grze, w którym jest do wyboru: expiarka, enchantowanie, sklep, ekwipunek oraz są wyświetlane informacje o graczu.

Expiarka i moby:
- W expiarce losuje ci mobka (do ustalenia których mobów dodamy, byle wszystkie enchanty miały sens np. pogromca nieumarłych, zmora stawonogów itd.).
- Statystyki mobów są takie same jak w mc i każdy mob ma szanse na dropnięcie jakiegoś przedmiotu.
- Gracz może zaatakować mobka ale odwrotnie już nie, tak jak w typowej expiarce w mc.

Sklep:
- Gra zaczyna się bez żadnej broni więc trzeba łapką ubić paru mobków, wymienić w sklepie zdobyte itemy na np. emeraldy i za te emeraldy kupić pierwszy drewniany mieczyk, który można już enchantować.
- Każdy przedmiot(zdobyty w expiarce) ma inną wartość w zależności od szansy na wydropienie.
- W sklepie oprócz sprzedawania itemów i kupowania broni, są ulepszenia stołu od enchantu i jakieś ulepszenia do expiarki (np. podniesienie poziomu przeciwników żeby dawali więcej expa).
- Naprawa broni (?jeśli dodamy wytrzymałość?).

Enchantowanie:
- System levelowania i wydawania leveli podobny jak w mc.
- Trzeba obmyśleć które enchanty dodajemy a które nie, tak żeby każdy enchant miał zastosowanie.
- Maksymalny poziom wylosowanego enchantu zależny od poziomu stołu do enchantowania. (nieskończona progresja)
- Samo enchantowanie działa podobnie jak w mc ale bez lazurytu.
- Po zenchantowaniu broni mamy wybór czy dać ją do ekwipunku czy wyrzucić.

Ekwipunek:
- Wyświetla posiadane bronie.
- Możliwość wybrania jednej broni w celu wyświetlenia jej statystyk, wyposażenia jej lub wyrzucenia.
- Wyświetla ilość posiadanych sprzedawalnych przedmiotów oraz waluty(emeraldów).
- Fajnie jakby z tymi sprzedawalnymi przedmiotami dało się coś więcej robić bo jak nie to można zrobić tak żeby moby dropiły od razu emeraldy.
*/