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

<<<<<<< HEAD
enum GameState{   
    MENU,
    Play,
    Settings,
    Instructions,
    Exit,
};

=======
//oc
>>>>>>> upstream/master
class Game{
private:
    bool g_isRunning;

    bool Initl();

    void ProcInpts();
    void Update();
    void Draw();
<<<<<<< HEAD
    GameState currentState;

=======
    
>>>>>>> upstream/master

public:
    Game();
    ~Game();

    void Run();



};

