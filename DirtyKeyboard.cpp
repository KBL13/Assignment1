#include "DirtyKeyboard.h"

double DirtyKeyboard::hit(double armor) {
	double damage = hitPoints - (armor*0.1);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
