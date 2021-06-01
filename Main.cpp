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

using namespace std;

int main(){

	Pokemon Charizard;
	Charizard.name = "Charizard";
	Charizard.hp = 360;
	Charizard.attack = 293;
	Charizard.defense = 280;
	Charizard.spAttack = 348;
	Charizard.spDefense = 295;
	Charizard.speed = 328;

	cout << Charizard.name << endl;
	cout << "Charizard HP:" << Charizard.hp << endl;
	cout << "Charizard Attack:" << Charizard.attack << endl;
	cout << "Charizard Defense:" << Charizard.defense << endl;
	cout << "Charizard Special Attack:" << Charizard.spAttack << endl;
	cout << "Charizard Special Defense:" << Charizard.spDefense << endl;
	cout << "Charizard Speed:" << Charizard.speed << endl;

	return 0;
}


