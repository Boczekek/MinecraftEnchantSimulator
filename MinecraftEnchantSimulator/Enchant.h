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
	std::vector<std::string> brakBroni;
	std::vector<std::string> drewniany;
	std::vector<std::string> zloty;
	std::vector<std::string> kamienny;
	std::vector<std::string> zelazny;
	std::vector<std::string> diamentowy;
	std::vector<std::string> netherytowy;
	std::vector<std::string> enchantStaty;

	Enchants() {
		std::string pierwszy = "Tak";
		enchanty.push_back(pierwszy);
	}
		
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
			switch (losowo) {
			case 0:
				return "bane of arthropods.II";
			case 1:
				return "sharpness.I";
			case 2:
				return "smite.III";
			case 3:
				return "smite.II";
			case 4:
				return "bane of arthropods.III";
			}
		}
		else if (lvl > 20) {
			switch (losowo) {
			case 0:
				return "smite.IV";
			case 1:
				return "education.I";
			case 2:
				return "bane of arthropods.IV";
			case 3:
				return "looting.I";
			case 4:
				return "sharpness.III";
			}
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
			switch (losowo) {
			case 0:
				return "sharpness.II";
			case 1:
				return "looting.I";
			case 2:
				return "bane of arthropods.III";
			case 3:
				return "education.I";
			case 4:
				return "smite.III";
			}
		}
		else if (lvl > 20) {
			switch (losowo) {
			case 0:
				return "sharpness.IV";
			case 1:
				return "looting.II";
			case 2:
				return "education.II";
			case 3:
				return "smite.IV";
			case 4:
				return "bane of arthropods.IV";
			}
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
			switch (losowo) {
			case 0:
				return "smite.IV";
			case 1:
				return "bane of arthropods.IV";
			case 2:
				return "sharpness.III";
			case 3:
				return "looting.II";
			case 4:
				return "education.II";
			}
		}
		else if (lvl > 20) {
			switch (losowo) {
			case 0:
				return "looting.III";
			case 1:
				return "smite.V";
			case 2:
				return "bane of arthropods.V";
			case 3:
				return "sharpness.V";
			case 4:
				return "education.III";
			}
		}
	}

	void enchantowanie(std::string enchant, std::string nazwaBroni) {
		std::string kopiarka;
		enchanty.push_back(enchant);
		if (nazwaBroni == "Drewniany miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			drewniany.push_back(kopiarka);
		}
		else if (nazwaBroni == "Z³oty miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			zloty.push_back(kopiarka);
		}
		else if (nazwaBroni == "Kamienny miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			kamienny.push_back(kopiarka);
		}
		else if (nazwaBroni == "¯elazny miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			zelazny.push_back(kopiarka);
		}
		else if (nazwaBroni == "Diamentowy miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			diamentowy.push_back(kopiarka);
		}
		else if (nazwaBroni == "Netherytowy miecz") {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			netherytowy.push_back(kopiarka);
		}
		else {
			kopiarka = enchanty.back();
			enchanty.pop_back();
			brakBroni.push_back(kopiarka);
		}
	}

	void enchantClear(std::string nazwaBroni) {
		if (nazwaBroni == "Drewniany miecz") drewniany.clear();
		else if (nazwaBroni == "Z³oty miecz") zloty.clear();
		else if (nazwaBroni == "Kamienny miecz") kamienny.clear();
		else if (nazwaBroni == "¯elazny miecz") zelazny.clear();
		else if (nazwaBroni == "Diamentowy miecz") diamentowy.clear();
		else if (nazwaBroni == "Netherytowy miecz") netherytowy.clear();
		else { brakBroni.clear(); }
	}

	void kopiarkaEnchantow(std::string nazwaBroni) {
		if (nazwaBroni == "Drewniany miecz") {
			for (std::string enchanter : drewniany) {
				enchantStaty.push_back(enchanter);
			}
		}
		else if (nazwaBroni == "Z³oty miecz") {
			for (std::string enchanter : zloty) {
				enchantStaty.push_back(enchanter);
			}
		}
		else if (nazwaBroni == "Kamienny miecz") {
			for (std::string enchanter : kamienny) {
				enchantStaty.push_back(enchanter);
			}
		}
		else if (nazwaBroni == "¯elazny miecz") {
			for (std::string enchanter : zelazny) {
				enchantStaty.push_back(enchanter);
			}
		}
		else if (nazwaBroni == "Diamentowy miecz") {
			for (std::string enchanter : diamentowy) {
				enchantStaty.push_back(enchanter);
			}
		}
		else if (nazwaBroni == "Netherytowy miecz") {
			for (std::string enchanter : netherytowy) {
				enchantStaty.push_back(enchanter);
			}
		}
		else {
			for (std::string enchanter : brakBroni) {
				enchantStaty.push_back(enchanter);
			}
		}
	}

	void liczenie(std::string mobek, std::string nazwaBroni) {
		kopiarkaEnchantow(nazwaBroni);
		dmg = 0;
		for (std::string enchant : enchantStaty) {
			//---------------------------------------------------------------------------------------------------//
			// sharpness
			if (enchant == "sharpness.I") dmg = dmg + 1;
			else if (enchant == "sharpness.II") dmg = dmg + 2;
			else if (enchant == "sharpness.III") dmg = dmg + 3;
			else if (enchant == "sharpness.IV") dmg = dmg + 4;
			else if (enchant == "sharpness.V") dmg = dmg + 5;
			//---------------------------------------------------------------------------------------------------//
			// smite dla zombie
			else if (enchant == "smite.I" && mobek == "Zombie") dmg = dmg + 1;
			else if (enchant == "smite.II" && mobek == "Zombie") dmg = dmg + 2;
			else if (enchant == "smite.III" && mobek == "Zombie") dmg = dmg + 3;
			else if (enchant == "smite.IV" && mobek == "Zombie") dmg = dmg + 4;
			else if (enchant == "smite.V" && mobek == "Zombie") dmg = dmg + 5;
			//---------------------------------------------------------------------------------------------------//
			// smite dla skeleton
			else if (enchant == "smite.I" && mobek == "Skeleton") dmg = dmg + 1;
			else if (enchant == "smite.II" && mobek == "Skeleton") dmg = dmg + 2;
			else if (enchant == "smite.III" && mobek == "Skeleton") dmg = dmg + 3;
			else if (enchant == "smite.IV" && mobek == "Skeleton") dmg = dmg + 4;
			else if (enchant == "smite.V" && mobek == "Skeleton") dmg = dmg + 5;
			//---------------------------------------------------------------------------------------------------//
			// bane of arthropods dla spider
			else if (enchant == "bane of arthropods.I" && mobek == "Spider") dmg = dmg + 1;
			else if (enchant == "bane of arthropods.II" && mobek == "Spider") dmg = dmg + 2;
			else if (enchant == "bane of arthropods.III" && mobek == "Spider") dmg = dmg + 3;
			else if (enchant == "bane of arthropods.IV" && mobek == "Spider") dmg = dmg + 4;
			else if (enchant == "bane of arthropods.V" && mobek == "Spider") dmg = dmg + 5;
			//---------------------------------------------------------------------------------------------------//
			// bane of arthropods dla creeper
			else if (enchant == "bane of arthropods.I" && mobek == "Creeper") dmg = dmg + 1;
			else if (enchant == "bane of arthropods.II" && mobek == "Creeper") dmg = dmg + 2;
			else if (enchant == "bane of arthropods.III" && mobek == "Creeper") dmg = dmg + 3;
			else if (enchant == "bane of arthropods.IV" && mobek == "Creeper") dmg = dmg + 4;
			else if (enchant == "bane of arthropods.V" && mobek == "Creeper") dmg = dmg + 5;
			//---------------------------------------------------------------------------------------------------//
			enchantStaty.clear();
		}
	}

	int education(std::string nazwaBroni) {
		kopiarkaEnchantow(nazwaBroni);
		int education = 5;
		for (std::string enchant : enchantStaty) {
			if (enchant == "education.I") education += 1;
			if (enchant == "education.II") education += 2;
			if (enchant == "education.III") education += 3;
		}
		enchantStaty.clear();
		return education;
	}

	int looting(std::string nazwaBroni) {
		kopiarkaEnchantow(nazwaBroni);
		int looting = 5;
		for (std::string enchant : enchantStaty) {
			if (enchant == "looting.I") looting += 1;
			if (enchant == "looting.II") looting += 2;
			if (enchant == "looting.III") looting += 3;
		}
		enchantStaty.clear();
		return looting;
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
//		smite - od 2 do 4
//		bane of arthropods - od 2 do 4
//		looting - od 1 do 2
//		education - od 1 do 2
//
//	Od lvl 21 do 30
//		sharpness - od 3 do 5
//		smite - od 4 do 5
//		bane of arthropods - od 4 do 5
//		looting - od 1 do 3
//		education - od 1 do 3