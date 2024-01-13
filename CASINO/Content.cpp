#include "Content.h"

#include <iostream>

TIMER timer;
source core;
int delay;
std::string txt = "loop";


void EndTimer()
{
    ConsoleLog::LogText("EndTimer");
    txt = "suck";
    core.Tick(false);
}

void Game::BeginPlay()
{
    ConsoleLog::LogText("BeginPlay");
    delay = core.EnterDelay();
    timer.Start(std::chrono::seconds(delay), EndTimer, true);
    core.Tick(true);
    //source::Tick(true);
}

void Game::EventTick()
{
    ConsoleLog::LogText(txt);
    system("cls");
}




