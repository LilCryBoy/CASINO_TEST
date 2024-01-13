#ifndef TIMERHPP
#define TIMERHPP
#include <chrono>
#include <functional>


class TIMER
{
public:
    TIMER();
    void Start(std::chrono::seconds delay, std::function<void ()> callback, bool async = true);
};
#endif