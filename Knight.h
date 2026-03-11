#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

class Knight : public Warrior {
private:
int chargeBonus;

public:
Knight(string name, int h, int p, int armor, int bonus);

int getChargeBonus() const;
int calculateBurstDamage() const;};
#endif