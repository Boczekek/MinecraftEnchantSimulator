#pragma once
#include <iostream>
#include <string>
#include <random>

#include "Gracz.h"

class Enchants {
public:
	int losowo = 0;






	void losowanieEnchant(int lvl) {

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 4);
		losowo = dis(gen);

		if (lvl <= 10) {
			switch (losowo) {
			case 0:
				std::cout << "sharpness I";
			case 1:
				std::cout << "smite I";
			case 2:
				std::cout << "bane of arthropods I";
			case 3:
				std::cout << "looting I";
			case 4:
				std::cout << "education I";
			}
		}
		else if (lvl <= 20 && lvl > 10) {
			std::cout << "15";
		}
		else if (lvl > 20) {
			std::cout << "25";
		}
	}
};




// Enchanty:
//		sharpness - bonus dmg vs wszystko
//		smite - bonus dmg vs undead
//		bane of arthropods - bonus dmg vs stawonogi
//		looting - wiecej waluty
//		education - wiecej exp
// 
//	Od lvl 1 do 10
//		sharpness - od 1 do 2
//		smite - od 1 do 3
//		bane of arthropods - od 1 do 3
//		looting - 1
//		education - 1
//
//	Od lvl 11 do 20
//		sharpness - od 2 do 3
//		smite - od 2 do 5
//		bane of arthropods - od 2 do 5
//		looting - od 1 do 2
//		education - od 1 do 2
//
//	Od lvl 21 do 30
//		sharpness - od 3 do 5
//		smite - od 3 do 5
//		bane of arthropods - od 3 do 5
//		looting - od 2 do 3
//		education - od 2 do 3