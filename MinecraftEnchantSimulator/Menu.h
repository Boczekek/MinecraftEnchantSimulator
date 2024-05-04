#pragma once
#include <iostream>
#include <string>
#include <locale.h>

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

std::string menuGry(std::string nazwa, int poziom, int szmaragdy) {
	system("cls");
	std::string decyzja;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "\t[ Co chcesz zrobiæ? ]" << std::endl;
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
	std::cout << "\t[ Podaj nazwê gracza ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> nazwa;
	return nazwa;
}

std::string menuExpiarki(std::string nazwa, int poziom, int szmaragdy ,int expik) {
	system("cls");
	std::string decyzja;
	int nextLVL = (poziom + 2) * 7 / 2;
	std::cout << std::endl;
	std::cout << "\t    [ EXPIARKA ]" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << nazwa << std::endl;
	std::cout << "Poziom: " << poziom << " | XP: " << expik << "/" << nextLVL << " | Szmaragdy: " << szmaragdy << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "?Nazwa wylosowanego mobka?" << std::endl;
	std::cout << "HP: " << "?Iloœæ hp mobka?" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "| 1 - Atak | 2 - Wyjœcie |" << std::endl;
	std::cout << std::endl;
	std::cout << ">";
	std::cin >> decyzja;
	return decyzja;
}