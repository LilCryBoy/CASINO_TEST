#include "Viewport.h"

#include <algorithm>
#include <iostream>
#include <ostream>

Viewport::Viewport()
{
    
}

bool Viewport::Tick(bool _TickEnabled)
{
    while (_TickEnabled)
    {
        std::cout << "HELLO WORLD" << std::endl;
        system("cls");
    } return false;
}



