#pragma once

#include <chrono>
#include <iostream>

class source
{
public:
    source();
    static void Tick(bool enabled);
    static void BeginPlay();
    int EnterDelay();
    
};

class ConsoleLog
{
public:
    ConsoleLog();
    static bool LogText(std::string text);
};