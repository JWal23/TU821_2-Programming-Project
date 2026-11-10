#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

#include "inventory.h"
#include "narrative.h"
#include "loot.h"
#include "AtkBar.h"
#include "gunsNArmour.h"

//oc
class Game{
private:
    bool g_isRunning;

    bool Initl();

    void ProcInpts();
    void Update();
    void Draw();
    

public:
    Game();
    ~Game();

    void Run();



};