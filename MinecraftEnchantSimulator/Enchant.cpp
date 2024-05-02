#include <iostream>
#include <string>
#include <stdlib.h>

class Gracz {
private:
	std::string nazwa_gracza = "";
public:
	int exp = 0;
	int lvl = 0;
	int waluta = 0;

	Gracz(std::string nazwa_gracza) {		//Konstruktor gracza z nadaniem nazwy
		this->nazwa_gracza = nazwa_gracza;
	}

	void addExp(int exp) {					//Metoda dodająca punkty doświadczenia
		this->exp += exp;
	}

	void addWaluta(int waluta) {			//Metoda dodająca walutę
		this->waluta += waluta;
	}
};

void menuGlowne() {
	std::cout << "\t$$\\      $$\\ $$$$$$\\ $$\\   $$\\ $$$$$$$$\\  $$$$$$\\  $$$$$$$\\   $$$$$$\\  $$$$$$$$\\ $$$$$$$$\\ " << std::endl;
	std::cout << "\t$$$\\    $$$ |\\_$$  _|$$$\\  $$ |$$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|\\__$$  __|" << std::endl;
	std::cout << "\t$$$$\\  $$$$ |  $$ |  $$$$\\ $$ |$$ |      $$ /  \\__|$$ |  $$ |$$ /  $$ |$$ |         $$ |   " << std::endl;
	std::cout << "\t$$\\$$\\$$ $$ |  $$ |  $$ $$\\$$ |$$$$$\\    $$ |      $$$$$$$  |$$$$$$$$ |$$$$$\\       $$ |   " << std::endl;
	std::cout << "\t$$ \\$$$  $$ |  $$ |  $$ \\$$$$ |$$  __|   $$ |      $$  __$$< $$  __$$ |$$  __|      $$ |   " << std::endl;
	std::cout << "\t$$ |\\$  /$$ |  $$ |  $$ |\\$$$ |$$ |      $$ |  $$\\ $$ |  $$ |$$ |  $$ |$$ |         $$ |   " << std::endl;
	std::cout << "\t$$ | \\_/ $$ |$$$$$$\\ $$ | \\$$ |$$$$$$$$\\ \\$$$$$$  |$$ |  $$ |$$ |  $$ |$$ |         $$ |   " << std::endl;
	std::cout << "\t\\__|     \\__|\\______|\\__|  \\__|\\________| \\______/ \\__|  \\__|\\__|  \\__|\\__|         \\__|   " << std::endl;
	std::cout << std::endl;
	std::cout << "\t      ___       __                 ___     __                         ___  __   __  " << std::endl;
	std::cout << "\t     |__  |\\ | /  ` |__|  /\\  |\\ |  |     /__` |  |\\/| |  | |     /\\   |  /  \\ |__) " << std::endl;
	std::cout << "\t     |___ | \\| \\__, |  | /~~\\ | \\|  |     .__/ |  |  | \\__/ |___ /~~\\  |  \\__/ |  \\ " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "1 - NOWA GRA" << std::endl;
	std::cout << "2 - WCZYTAJ ZAPIS" << std::endl;
	std::cout << "3 - WYJSCIE" << std::endl;
	std::cout << std::endl;
}

int main() {
	short decyzja;
	do {
		menuGlowne();
		std::cout << "?>:";
		std::cin >> decyzja;
		switch (decyzja) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			return 0;
			break;

		}
		system("cls");
	} while (decyzja <= 0 || decyzja > 3);
	
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
