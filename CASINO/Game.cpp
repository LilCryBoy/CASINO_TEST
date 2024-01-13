#include "Game.h"

#include <iostream>

void Game::BeginPlay()
{
    std::cout << "BeginPlay" << std::endl;
}

void Game::EventTick()
{
    std::cout << "EventTick" << std::endl;
}
