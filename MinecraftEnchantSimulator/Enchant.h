#pragma once
#include <iostream>
#include <string>
#include <random>
#include <vector>

class Enchants {
public:
	int dmg = 0;
	int losowo = 0;
	std::vector<std::string> enchanty;
		
	void losowanieEnchant(void) {

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 4);
		losowo = dis(gen);
	}
	std::string enchantowTier1(int lvl) {
		if (lvl <= 10) {
			switch (losowo) {
			case 0:
				return "sharpness.I";
			case 1:
				return "smite.I";
			case 2:
				return "bane of arthropods.I";
			case 3:
				return "bane of arthropods.II";
			case 4:
				return "smite.II";
			}
		}
		else if (lvl <= 20 && lvl > 10) {
			return "15";
		}
		else if (lvl > 20) {
			return "25";
		}
	}

	std::string enchantowTier2(int lvl) {
		if (lvl <= 10) {
			switch (losowo) {
			case 0:
				return "smite.II";
			case 1:
				return "bane of arthropods.II";
			case 2:
				return "sharpness.I";
			case 3:
				return "smite.III";
			case 4:
				return "bane of arthropods.III";
			}
		}
		else if (lvl <= 20 && lvl > 10) {
			return "15";
		}
		else if (lvl > 20) {
			return "25";
		}
	}

	std::string enchantowTier3(int lvl) {
		if (lvl <= 10) {
			switch (losowo) {
			case 0:
				return "bane of arthropods.III";
			case 1:
				return "sharpness.II";
			case 2:
				return "smite.III";
			case 3:
				return "looting.I";
			case 4:
				return "education.I";
			}
		}
		else if (lvl <= 20 && lvl > 10) {
			return "15";
		}
		else if (lvl > 20) {
			return "25";
		}
	}

	void enchantowanie(std::string enchant) {
		enchanty.push_back(enchant);
	}

	void enchantClear(void) {
		enchanty.clear();
	}

	void liczenie(std::string mobek) {
		dmg = 0;
		for (std::string enchant : enchanty) {
			if (enchant == "sharpness.I") dmg = dmg + 1;
			else if (enchant == "sharpness.II") dmg = dmg + 2;
			else if (enchant == "sharpness.III") dmg = dmg + 3;
			else if (enchant == "sharpness.IV") dmg = dmg + 4;
			else if (enchant == "sharpness.V") dmg = dmg + 5;
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
//		sharpness - od 1 do 3
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