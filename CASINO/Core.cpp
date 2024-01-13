#include "Core.h"

#include "Content.h"
#include <algorithm>
#include <ostream>

source::source()
{
    
}

void source::Tick(bool enabled)
{
    while (enabled)
    {
        Game::EventTick();
    }
}

void source::BeginPlay()
{
    Game::BeginPlay(); 
}

int source::EnterDelay()
{
    int a;
    std::cin >> a;
    return a;
}

bool ConsoleLog::LogText(std::string text)
{
    if(std::cout << text << std::endl)
        return true;
    else
    {
        return false;
    }
}





