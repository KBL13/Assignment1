#include <string>
#include <stdlib.h>
#include <time.h>
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	int armorTemp = rand() % (armor/2);
	double damage = hitPoints - (armorTemp);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
