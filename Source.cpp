#include"Pokemon.h"
#include"string"
#include<iostream>

using namespace std;



Pokemon::Pokemon()
{
	name = "";
	type = "";
	health = 0;
}


Pokemon::Pokemon(string name,string type,int health )
{
	this->name = name;
	this->type = type;
	this->health = health;
}

Pokemon::~Pokemon()
{
}



void Pokemon::printInfo() {
	cout <<"Name:"<<this->name << endl;
	cout << "Type:" << this->type << endl;
	cout << "Health:" << this->health << endl;
	cout << endl;


}

void Pokemon::speak() {
	if (this->type == "Normal") {
		cout << "Speaking like a Normal Pokemon" << endl;
	}
	else if (this->type == "Fire") {
		cout << "Speaking like a Fire Pokemon" << endl;
	}
	else if (this->type == "Water") {

		cout << "Speaking like a Water Pokemon" << endl;
	}
	else if(this->type=="Electric")
	{
		cout << "Speaking like a Electric Pokemon" << endl;
	}

}






ElectricPokemon::ElectricPokemon()
{
	name = "";
	type = "electric";
	health = 0;
}


ElectricPokemon::ElectricPokemon(string name,int health)
{
	this->name = name;
	this->type = "Electric";
	this->health = health;
}

ElectricPokemon::~ElectricPokemon()
{
}


void ElectricPokemon::fight(Pokemon *ptr) {
	if (this->health < 0) {

		cout << this->name << " has not enough HP to fight!" << endl;

	}
	else {

		ptr->health = ptr->health - 30;
		cout << ptr->name << " lost 30 HP" << endl;
	
	}


}

void ElectricPokemon::eatBerry(int berrynumb) {

	this->health = this->health + 30;

	cout << this->name << "ate" << berrynumb << "berries" << endl;
	cout << this->name << "'s HP incerased by " << berrynumb * 30 << endl;
}

void ElectricPokemon::speak() {

	cout << "Speaking like electric pokemon" << endl;
}


WaterPokemon::WaterPokemon()
{
	name = "";
	type = "water";
	health = 0;
}

WaterPokemon::WaterPokemon(string name, int health)
{
	this->name = name;
	this->type = "Water";
	this->health = health;
}

WaterPokemon::~WaterPokemon()
{
}


void WaterPokemon::fight(Pokemon *ptr) {
	if (this->health < 0) {

		cout << this->name << " has not enough HP to fight!" << endl;

	}
	else {

		ptr->health = ptr->health - 10;
		cout << ptr->name << " lost 10 HP" << endl;

	}
}

void WaterPokemon::eatBerry(int berrynumb) {

	this->health = this->health + 80;

	cout << this->name << " ate" << berrynumb << " berries" << endl;
	cout << this->name << "'s HP incerased by " << berrynumb * 80 << endl;
}

void WaterPokemon::speak() {

	cout << "speaking like water pokemon" << endl;

}


FirePokemon::FirePokemon()
{
	name = "";
	type = "fire";
	health = 0;
}

FirePokemon::FirePokemon(string name, int health)
{
	this->name = name;
	this->type = "Fire";
	this->health = health;
}

FirePokemon::~FirePokemon()
{
}


void FirePokemon::fight(Pokemon *ptr) {
	if (this->health < 0) {

		cout << this->name << " has not enough HP to fight!" << endl;

	}
	else {

		ptr->health = ptr->health - 20;
		cout << ptr->name << " lost 20 HP" << endl;

	}
}

void FirePokemon::eatBerry(int berrynumb) {

	this->health = this->health + 50;

	cout << this->name << " ate" << berrynumb << " berries" << endl;
	cout << this->name << "'s HP incerased by " << berrynumb * 50 << endl;
}

void FirePokemon::speak() {

	cout << "speaking like fire pokemon" << endl;

}