#include "Viewport.h"

#include "Game.h"
#include <algorithm>
#include <ostream>

Viewport::Viewport()
{
    
}

void Viewport::Tick(bool enabled)
{
    Game::BeginPlay();
    while (enabled)
    {
        Game::EventTick();
    }
}



