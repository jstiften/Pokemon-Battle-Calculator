/*
 * Move.h
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#ifndef MOVE_H_
#define MOVE_H_

#include<string>

#include "PokemonTypes.h"

using namespace std;

struct Move{
	string name;
	PokemonType type;
	int power;
	int accuracy;
	bool specialOrPhysical;
};

struct Move* createMove(string name, PokemonType type, int power, int accuracy, bool specialOrPhysical){
	struct Move* move = (struct Move*)malloc(sizeof(struct Move));

	move->name = name;
	move->type = type;
	move->power = power;
	move->accuracy = accuracy;
	move->specialOrPhysical = specialOrPhysical;

	return move;
}


#endif /* MOVE_H_ */
