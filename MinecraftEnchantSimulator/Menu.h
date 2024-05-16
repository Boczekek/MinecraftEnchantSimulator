#pragma once
#include <iostream>
#include <string>
#include <locale.h>
#include <vector>

#include "Moby.h"

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
	std::cout << "3 - WYJ�CIE" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string menuGry(std::string nazwa, int poziom, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\t[ Co chcesz zrobi�? ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "1 - Id� do expaiarki" << std::endl;
	std::cout << "2 - Id� do sklepu" << std::endl;
	std::cout << "3 - Enchantuj bro�" << std::endl;
	std::cout << "4 - Organizuj ekwipunek" << std::endl;
	std::cout << "5 - Wr�� do menu g��wnego" << std::endl;
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
	std::cout << "\t[ Podaj nazw� gracza ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> nazwa;
	return nazwa;
}

std::string menuExpiarki(std::string nazwaGracza, int poziomGracza, int szmaragdy, int expik, int hp, std::string nazwaMobka) {
	system("cls");
	std::string decyzja;
	int nextLVL = (poziomGracza + 2) * 7 / 2;
	std::cout << std::endl;
	std::cout << "\t    [ EXPIARKA ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaGracza << std::endl;
	std::cout << "Poziom: " << poziomGracza << " | XP: " << expik << "/" << nextLVL << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwaMobka << std::endl;
	std::cout << "HP: " << hp << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 1 - Atak | 0 - Wyj�cie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string menuSklepu(std::string nazwaGracza, int poziomGracza, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::vector<std::string> listaPrzedmiotow;
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
	std::cout << "1 - Kup bro�" << std::endl;
	std::cout << "2 - Kup ulepszenie" << std::endl;
	std::cout << "3 - Sprzedaj przedmiot" << std::endl;
	std::cout << "0 - Wyj�cie" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}

std::string sklepBronie(std::string nazwaGracza, int poziomGracza, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::vector<std::string> listaPrzedmiotow;
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
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 0 - Wyj�cie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}