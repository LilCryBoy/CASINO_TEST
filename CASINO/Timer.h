

//Простой класс таймера

#include <chrono>
#include <functional>

class TIMER
{
public:
    TIMER();
    void Start(std::chrono::microseconds delay, std::function<void ()> callback);
};
