#include "Timer.h"
#include <thread>

TIMER::TIMER(){
}

void TIMER::Start(std::chrono::microseconds delay, std::function<void()> callback)
{
    std::thread([=]()
    {
        std::this_thread::sleep_for(std::chrono::microseconds(delay));
        callback;
    }).detach();
}