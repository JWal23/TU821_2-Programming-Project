#pragma once

#include <iostream>
#include <string>
#include <windows.h>

#include "inventory.h"
#include "narrative.h"
#include "loot.h"

enum GameState{   
    MENU,
    Play,
    Settings,
    Instructions,
    Exit,
};

class Game{
private:
    bool g_isRunning;

    bool Initl();

    void ProcInpts();
    void Update();
    void Draw();
    GameState currentState;


public:
    Game();
    ~Game();

    void Run();



};

