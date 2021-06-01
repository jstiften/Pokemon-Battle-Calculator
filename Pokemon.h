/*
 * Pokemon.h
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#ifndef POKEMON_H_
#define POKEMON_H_

#include<string>

using namespace std;

struct Pokemon {
	string name;
	int hp;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	int speed;
};

struct Pokemon* createPokemon(string name, int hp, int attack, int defense, int spAttack, int spDefense, int speed){
	struct Pokemon* pokemon = (struct Pokemon*)malloc(sizeof(struct Pokemon));

	pokemon->name = name;
	pokemon->hp = hp;
	pokemon->attack = attack;
	pokemon->defense = defense;
	pokemon->spAttack = spAttack;
	pokemon->spDefense = spDefense;
	pokemon->speed = speed;

	return pokemon;
}



#endif /* POKEMON_H_ */
