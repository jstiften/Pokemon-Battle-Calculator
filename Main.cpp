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
#include<string>
#include<algorithm>

using namespace std;

void initGen1();
string parseWeather(string userInput);

Pokemon* charmander;
Pokemon* charmeleon;
Pokemon* charizard;

int main(){

	initGen1();
	cout << charmander->name << endl;
	cout << charmeleon->name << endl;
	cout << charizard->name << endl;

	string userWeather;
	getline(cin, userWeather);
	parseWeather(userWeather);
	cout << userWeather << endl;

	return 0;
}

void initGen1(){
	charmander = createPokemon("Charmander", 282, 223, 203, 240, 201, 218);
	charmeleon = createPokemon("Charmeleon", 320, 249, 236, 284, 251, 284);
	charizard = createPokemon("Charizard", 360, 293, 280, 348, 295, 328);
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
	}

	return weather;
}

