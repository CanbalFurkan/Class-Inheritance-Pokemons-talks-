

#include <string>
#include <iostream>

using namespace std;


class Pokemon
{
public:
	Pokemon();
	Pokemon(string, string, int);
	~Pokemon();
	void Pokemon::printInfo();
	void Pokemon::speak();
	string type;
	int health;
	string name;

};


class ElectricPokemon :public Pokemon {

public:
	ElectricPokemon();
	ElectricPokemon(string, int);
	~ElectricPokemon();
	void ElectricPokemon::fight(Pokemon*);
	void ElectricPokemon::speak();
	void ElectricPokemon::eatBerry(int);


	
	


};
		
class WaterPokemon :public Pokemon {

public:
	WaterPokemon();
	WaterPokemon(string, int);
	~WaterPokemon();
	void WaterPokemon::fight(Pokemon*);
	void WaterPokemon::speak();
	void WaterPokemon::eatBerry(int);






};


class FirePokemon :public Pokemon {

public:
	FirePokemon();
	FirePokemon(string, int);
	~FirePokemon();
	void FirePokemon::fight(Pokemon*);
	void FirePokemon::speak();
	void FirePokemon::eatBerry(int);


	


};




