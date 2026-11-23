#include "Player.h"
    
Inventory::Inventory()
{
    GunsNArmour** allGunsAndArmours = new GunsNArmour*[6]; //number can change idk how many guns we will need.
        allGunsAndArmours[0] = new GunsNArmour("Revolver", ItemTier::Gun, 2, 6, 0);
        allGunsAndArmours[1] = new GunsNArmour("Shotgun", ItemTier::Gun, 10, 2, 0);
        allGunsAndArmours[2] = new GunsNArmour("Platinum Deagle", ItemTier::Gun, 8, 7, 0);
        allGunsAndArmours[3] = new GunsNArmour("Holy Bible", ItemTier::Gun, 100, 100, 3);
        allGunsAndArmours[4] = new GunsNArmour("AK-47", ItemTier::Gun, 3, 30, 0);
        allGunsAndArmours[5] = new GunsNArmour("Leather Jacket", ItemTier::Armour, 0, 0, 2);
}

Inventory::~Inventory()
{
    for(int ctr = 0; ctr<(sizeof(allGunsNArmour)/sizeof(allGunsNArmour[0])); ctr++)
    {
        delete allGunsNArmour[ctr];
    }
    delete[] allGunsNArmour;
}

GunsNArmour *Inventory::getItem(int index)
{
    return &allGunsNArmour[index];
}
