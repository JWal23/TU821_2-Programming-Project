#pragma once

#include "tiers.h"
//oc

class GunsNArmour {
public:
    ItemTier tier;
    int damage = 0;
    int ammo = 0;
    int bonusHP = 0;
    int extraStorage = 0;

    GunsNArmour() {}

    GunsNArmour(ItemTier tierValue, int damageValue, int ammoValue, int bonusHPValue, int extraStorageValue = 0)
    {
        tier = tierValue;
        damage = damageValue;
        ammo = ammoValue;
        bonusHP = bonusHPValue;
        extraStorage = extraStorageValue;
    }
};  

class Cutlas : public GunsNArmour{
public:
    Cutlas() : GunsNArmour{ItemTier::Secondary, 10, 0, 0, 0} {}
};

class Revolver : public GunsNArmour {
public:
    Revolver()
    {
        tier = ItemTier::Secondary;
        damage = 2;
        ammo = 6;
        bonusHP = 0;
        extraStorage = 0;
    }
};

class SawedOff : public GunsNArmour {
public:
<<<<<<< HEAD
    SawedOff() : GunsNArmour{ItemTier::Secondary, 5, 2, 0, 0} {}
=======
    SawedOff()
    {
        tier = ItemTier::Secondary;
        damage = 5;
        ammo = 2;
        bonusHP = 0;
        extraStorage = 0;
    }
>>>>>>> upstream/master
};

class leatherJacket : public GunsNArmour {
public: 
    leatherJacket()
    {
        tier = ItemTier::Armour;
        damage = 0;
        ammo = 0;
        bonusHP = 5;
        extraStorage = 1;
    }
};