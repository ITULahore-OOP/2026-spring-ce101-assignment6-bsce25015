#include "Knight.h"

Knight::Knight(string name, int h, int p, int armor, int bonus): Warrior(name, h, p, armor) {
chargeBonus = bonus;}

int Knight::getChargeBonus() const {
return chargeBonus;}

int Knight::calculateBurstDamage() const {
return getPower() + chargeBonus;}