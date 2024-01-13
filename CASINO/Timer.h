﻿//Простой класс таймера

#pragma once
#include <chrono>
#include <functional>

class TIMER
{
public:
    TIMER();
    void Start(std::chrono::microseconds delay, std::function<void ()> callback);
};
