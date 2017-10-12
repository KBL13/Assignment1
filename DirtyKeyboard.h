#include <string>
#include "Weapon.h"

#ifndef DIRTYKEYBOARD_H
#define DIRTYKEYBOARD_H

class DirtyKeyboard : public Weapon {
public:

    DirtyKeyboard() : Weapon("Dirty Keyboard", 90.0) {
    }
    virtual ~DirtyKeyboard() {};
    virtual double hit(double armor);

};

#endif
