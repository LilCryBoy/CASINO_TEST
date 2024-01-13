#include "Timer.h"

#include <iostream>
#include <ostream>
#include <thread>

TIMER::TIMER(){
}

void TIMER::Start(std::chrono::seconds delay, std::function<void()> callback, bool async)
{
    std::cout << "Timer run"  << std::endl;
    if(async)
    {
        std::thread([=]()
        {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        callback();
        }).detach();
    }

    if(!async)
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        callback();
    }
}