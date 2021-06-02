/*
 * Main.cpp
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include"Pokemon.h"
#include"types.h"
#include"Move.h"
#include<string>
#include<algorithm>

using namespace std;

bool moreAttacks = true;
string attackingPokemonName;
string defendingPokemonName;
string weather;
string moveName;

void initTypes();
void initMoves();
void initGen1();
void runInterface();
string parseWeather(string userInput);
double calcLowRoll(int level, int power, int attack, int defense, double targets, double weather, double critical,
		double stab, double type, double burn, int other);
double calcHighRoll(int level, int power, int attack, int defense, double targets, double weather, double critical,
		double stab, double type, double burn, int other);
double damageCalc(string weather);

types* fire;
types* water;
types* grass;

Move* ember;
Move* waterGun;
Move* vineWhip;

Pokemon* charmander;
Pokemon* charmeleon;
Pokemon* charizard;

Pokemon *monArray[3];

int main(){

	initTypes();
	initGen1();

	cout << monArray[0]->name << endl;

	return 0;
}

void initTypes(){
	fire = createType("Fire");
	water = createType("Water");
	grass = createType("Grass");
}

void initMoves(){

}

void initGen1(){
	charmander = createPokemon("Charmander", 282, 223, 203, 240, 201, 218);
	charmeleon = createPokemon("Charmeleon", 320, 249, 236, 284, 251, 284);
	charizard = createPokemon("Charizard", 360, 293, 280, 348, 295, 328);
	monArray[0] = charmander;
	monArray[1] = charmeleon;
	monArray[3] = charizard;
}

void runInterface(){
	while(moreAttacks == true){
		cout << "What pokemon is attacking?" << endl;
		getline(cin, attackingPokemonName);
		cout << "What pokemon is defending?" << endl;
		getline(cin, defendingPokemonName);
		cout << "What is the weather?" << endl;
		getline(cin, weather);
		cout << "What move is being used?" << endl;
		getline(cin, moveName);
	}
}

string parseWeather(string userInput){
	string weather;

	if(userInput.compare("sun")){
		weather = "sun";
	}else if(userInput.compare("sand")){
		weather = "sand";
	}else if(userInput.compare("rain")){
		weather = "rain";
	}else if(userInput.compare("hail")){
		weather = "hail";
	}else if(userInput.compare("none")){
		weather = "none";
	}

	return weather;
}

double calcLowRoll(int level, int power, int attack, int defense, double targets, double weather, double critical,
		double stab, double type, double burn, int other){
	double lowRoll;

	int tempLevel = ((2*level)/5) + 2;
	double attackOverDefense = attack / defense;

	lowRoll = (((tempLevel * power * attackOverDefense) / 50) + 2) * targets * weather * critical * 0.85
			*stab*type*burn*other;

	return lowRoll;
}

double calcHighRoll(int level, int power, int attack, int defense, double targets, double weather, double critical,
		double stab, double type, double burn, int other){
	double highRoll;

	int tempLevel = ((2*level)/5) + 2;
	double attackOverDefense = attack / defense;

	highRoll = (((tempLevel * power * attackOverDefense) / 50) + 2) * targets * weather * critical * 1
			*stab*type*burn*other;

	return highRoll;
}

double damageCalc(string weather){
	double damage = 1;



	return damage;
}

