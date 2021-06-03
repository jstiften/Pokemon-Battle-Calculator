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
#include"PokemonTypes.h"
#include"TypeLib.h"
#include"Move.h"
#include<string>
#include<algorithm>
#include"Gen1Lib.h"

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

Pokemon *monArray[151];

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
	flying = createType("flying");
	poison = createType("poison");
	noSecondType = createType("No Second Type");
}

void initMoves(){

}

void initGen1(){
	bulbasaur = createPokemon("Bulbasaur", *grass, *poison, 45, 49, 49, 65, 65, 45);
	ivysaur = createPokemon("Ivysaur", *grass, *poison, 60, 62, 63, 80, 80, 60);
	venusaur = createPokemon("Venusaur", *grass, *poison, 80, 82, 83, 100, 100, 80);
	charmander = createPokemon("Charmander", *fire, *noSecondType, 39, 52, 43, 60, 50, 65);
	charmeleon = createPokemon("Charmeleon", *fire, *noSecondType, 58, 64, 58, 80, 65, 80);
	charizard = createPokemon("Charizard", *fire, *flying, 78, 84, 78, 109, 85, 100);
	squirtle = createPokemon("Squirtle", *water, *noSecondType, 44, 48, 65, 50, 64, 43);
	wartortle = createPokemon("Wartortle", *water, *noSecondType, 59, 63, 80, 65, 80, 58);
	blastoise = createPokemon("Blastoise", *water, *noSecondType, 79, 83, 100, 85, 105, 78);
	monArray[0] = bulbasaur;
	monArray[1] = ivysaur;
	monArray[2] = venusaur;
	monArray[3] = charmander;
	monArray[4] = charmeleon;
	monArray[5] = charizard;
	monArray[6] = squirtle;
	monArray[7] = wartortle;
	monArray[8] = blastoise;
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

