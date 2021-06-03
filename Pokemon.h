/*
 * Pokemon.h
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#ifndef POKEMON_H_
#define POKEMON_H_

#include<string>

#include "PokemonTypes.h"

using namespace std;

struct Pokemon {
	string name;
	PokemonType type1;
	PokemonType type2;
	int hp;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	int speed;
};

struct Pokemon* createPokemon(string name, PokemonType type1, PokemonType type2, int hp, int attack, int defense, int spAttack, int spDefense, int speed){
	struct Pokemon* pokemon = (struct Pokemon*)malloc(sizeof(struct Pokemon));

	pokemon->name = name;
	pokemon->type1 = type1;
	pokemon->type2 = type2;
	pokemon->hp = hp;
	pokemon->attack = attack;
	pokemon->defense = defense;
	pokemon->spAttack = spAttack;
	pokemon->spDefense = spDefense;
	pokemon->speed = speed;

	return pokemon;
}



#endif /* POKEMON_H_ */
