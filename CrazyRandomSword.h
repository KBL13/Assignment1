#include <string>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
	int hitpointsTemp;
	srand(time(NULL));
	hitpointsTemp = rand() % 100 + 10;
    CrazyRandomSword() : Weapon("Crazy Random Sword", hitpointsTemp) {
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif
