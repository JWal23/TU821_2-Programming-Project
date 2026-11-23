#pragma once

#include "Health.h"

class Enemy
{
private:
    int turnBasedCombat();
    int baddyHp;
    std::string baddysName;
    void setBaddyHp(int hp){baddyHp = hp;}
    void setBaddyName(std::string name){baddysName = name;}

public:
    Enemy(int eHp, std::string name);
    int getBaddyHp(){return baddyHp;}
    std::string getBaddyName(){return baddysName;}
    void reload(int* ammos, int* maxAmmos);
};