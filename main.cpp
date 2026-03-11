#include "Guild.h"
#include "Knight.h"
#include "Spellblade.h"

int main() {
Guild guild("Eldoria Guild");
Hero* h1 = new Hero("Archer", 100, 40);
Hero* h2 = new Warrior("Brutus", 120, 50, 10);
Hero* h3 = new Knight("Leon", 150, 60, 15, 30);
Hero* h4 = new Spellblade("ArcaneBlade", 110, 55, 8, 100, 35);
guild += h1;
guild += h2;
guild += h3;
guild += h4;
cout << guild << endl;
cout << "Total Guild Power: " << guild.calculateTotalGuildPower() << endl;
cout << endl;
Warrior w("Tank",130,45,20);

cout << "Effective Health: " << w.calculateEffectiveHealth() << endl;
Knight k("RoyalKnight",140,65,12,25);
cout << "Burst Damage: " << k.calculateBurstDamage() << endl;
Spellblade s("ArcaneWarrior",120,70,10,120,40);
cout << "Hybrid Damage: " << s.calculateHybridDamage() << endl;
return 0;}