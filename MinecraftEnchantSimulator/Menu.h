#pragma once
#include <iostream>
#include <string>
#include <locale.h>
#include <vector>

#include "Moby.h"
#include "Przedmioty.h"
#include "Enchant.h"

class Ulepszenia {
public:
	int mnoznik = 1;
	int lvl = 1;
	int cenaMnoznik = 50 * (mnoznik * ((mnoznik + 2) / 3));
	int cenaLvl = 50 * (lvl * ((lvl + 2) / 3));
};

Ulepszenia ulepszenia;

std::string menuGlowne() {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
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
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - NOWA GRA" << std::endl;
	std::cout << "2 - WCZYTAJ ZAPIS" << std::endl;
	std::cout << "3 - WYJŒCIE" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string nowaGra() {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "  Czy na pewno chcesz rozpocz¹æ now¹ grê? " << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "[Y/N]" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string menuGry(std::string nazwa, int poziom, int szmaragdy, std::string nazwaBroni, int dmg, int ench) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t[ Co chcesz zrobiæ? ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << std::endl;
	std::cout << "Broñ: " << nazwaBroni << " [DMG: " << dmg + ench << "]" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - IdŸ do expaiarki" << std::endl;
	std::cout << "2 - IdŸ do sklepu" << std::endl;
	std::cout << "3 - Enchantuj broñ" << std::endl;
	std::cout << "4 - Organizuj ekwipunek" << std::endl;
	std::cout << "5 - Wróæ do menu g³ównego" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string podajNazwe() {
	system("cls");
	std::string nazwa;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\t  Podaj nazwê gracza  " << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> nazwa;
	return nazwa;
}

std::string menuExpiarki(std::string nazwaGracza, int poziomGracza, std::string nazwaBroni, int dmg, int szmaragdy, int expik, int hp, std::string nazwaMobka, int ench) {
	system("cls");
	std::string decyzja;
	int nextLVL = (poziomGracza + 2) * 7 / 2;
	std::cout << std::endl;
	std::cout << "\t    [ EXPIARKA ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaGracza << std::endl;
	std::cout << "Poziom: " << poziomGracza << " | XP: " << expik << "/" << nextLVL << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << std::endl;
	std::cout << "Broñ: " << nazwaBroni << " [DMG: " << dmg + ench << "]" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaMobka << std::endl;
	std::cout << "HP: " << hp << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 1 - Atak | 0 - Wyjœcie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string menuSklepu(std::string nazwaGracza, int poziomGracza, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t    [ SKLEP ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaGracza << std::endl;
	std::cout << "Poziom: " << poziomGracza << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - Kup broñ" << std::endl;
	std::cout << "2 - Kup ulepszenie" << std::endl;
	std::cout << "0 - Wyjœcie" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::vector<std::string> listaBroni{ drewnianymiecz.infoSklep()};

std::string sklepBronie(std::string nazwaGracza, int poziomGracza, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t [ SKLEP - BRONIE ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaGracza << std::endl;
	std::cout << "Poziom: " << poziomGracza << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Bronie:" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i != listaBroni.size(); i++)
	std::cout << i + 1 << " - " << listaBroni[i] << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 0 - Wyjœcie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string sklepUlepszenia(std::string nazwaGracza, int poziomGracza, int szmaragdy, int poziomPrzeciwnikow, int mnoznik, int cenaLvl, int cenaMnoznik) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t [ SKLEP - ULEPSZENIA ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaGracza << std::endl;
	std::cout << "Poziom: " << poziomGracza << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Ulepszenia:" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - Poziom przeciwników (wiêcej XP) [LVL " << poziomPrzeciwnikow << "]" << "\t| Cena: " << cenaLvl << std::endl;
	std::cout << "2 - Iloœæ otrzymywanych szmaragdów  [LVL " << mnoznik << "]" << "\t| Cena: " << cenaMnoznik << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 0 - Wyjœcie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::vector<std::string> listaEkpitunek;

std::string menuEkwipunek(std::string nazwa, int poziom, int szmaragdy, std::string nazwaBroni, int dmg, int ench) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t   [ EKWIPUNEK ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << std::endl;
	std::cout << "Broñ: " << nazwaBroni << " [DMG: " << dmg + ench << "]" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Twoje bronie:" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i != listaEkpitunek.size(); i++)
		std::cout << i + 1 << " - " << listaEkpitunek[i] << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 0 - Wyjœcie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
};

std::string menuEnchant(std::string nazwa, int poziom, int szmaragdy, std::string enchant1, std::string enchant2, std::string enchant3) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "\t    [ Enchant ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom  << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - " << enchant1 << std::endl;
	std::cout << "2 - " << enchant2 << std::endl;
	std::cout << "3 - " << enchant3 << std::endl;
	std::cout << "4 - Usuñ enchant" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "0 - Wyjœcie" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
};