#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	if (armor > 0 && armor < 20)
	{
    		double damage = hitPoints;
	}
	else
	{
		double damage = hitPoints - (armor);
	}
    if (damage < 0) {
        return 0;
    }
    return damage;
}
