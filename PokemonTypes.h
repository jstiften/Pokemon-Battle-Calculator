/*
 * Types.h
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#ifndef POKEMONTYPES_H_
#define POKEMONTYPES_H_

#include<string>

using namespace std;

struct PokemonType{
	string name;
};

struct PokemonType* createType(string name){
	struct PokemonType* type = (struct PokemonType*)malloc(sizeof(struct PokemonType));

	type->name = name;

	return type;
}



#endif /* POKEMONTYPES_H_ */
