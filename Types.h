/*
 * Types.h
 *
 *  Created on: Jun 1, 2021
 *      Author: jakestiften
 */

#ifndef TYPES_H_
#define TYPES_H_

#include<string>

using namespace std;

struct types{
	string name;
};

struct types* createType(string name){
	struct types* type = (struct types*)malloc(sizeof(struct type));

	type->name = name;

	return type;
}



#endif /* TYPES_H_ */
