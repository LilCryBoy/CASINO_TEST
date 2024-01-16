#include <iostream>
#include <random>
#include <thread>
#include <valarray>
//#include <Windows.h>
#include <chrono>
#include <functional>
//#include <conio.h>
//#include <ncurses.h>
//#include <unistd.h>


bool CheckPress = false;
double stavka;
double balance = 1000;
int KeyPOP = 0;

//#define KEY_UP    72

void Check()
{
    
    std::thread([=]()
    {
        while (true)
        {
            if(getchar() == KeyPOP)
            {
                CheckPress = true;
                break;
            }
        }
        
        /*char ch;
        while (true)
        {
            ch = _getch();
            if (ch == '\r')
            {
                CheckPress = true;
                char ch = '\0';
                break;
            }
        }
        */
    }).detach();
}


int main()
{
    setlocale(LC_ALL, "");

    
    srand(time(0));
    int a = rand() % (100 - 1 + 1) + 1;

    double X;

    std::random_device rd;
    std::mt19937 gen1(rd());
    std::mt19937 gen3(rd());
    std::mt19937 gen4(rd());
    std::mt19937 gen5(rd());
    std::uniform_real_distribution<double> ran1(1, 1.10f);
    double g1 =  ran1(gen1);

    std::uniform_real_distribution<double> ran2(1, 3);
    double g3 = ran2(gen3);

    std::uniform_real_distribution<double> ran3(1, 10);
    double g4 = ran3(gen4);

    std::uniform_real_distribution<double> ran4(1, 100);
    double g5 = ran4(gen5);


    bool _tWhile = true;
    double count = 0.0;

    while (true)
    {
        std::cout << "НАДМИ НА КНОПКУ КОТОРАЯ БУДЕТ СТОПИТЬ ПРОКРУТКУ " << std::endl;
        KeyPOP = getchar();
        std::cout << KeyPOP << std::endl;
        break;
    }
    

    std::cout << "Твой баланс - " << balance << std::endl;
    std::cout << "Поставь ставку" << std::endl;
    std::cin >> stavka;
    balance -= stavka;


    if(a>=1 && a<=20)
    {
        X = g1;
    }
    if(a>=21 && a<=60)
    {
        X = g3;    
    }
    if(a>=61 && a<=95)
    {
        X = g4;
    }
    if(a>=96)
    {
        X = g5;
    }
    
    std::this_thread::sleep_for(std::chrono::seconds(1));
    Check();
    while (_tWhile)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        count = count + 0.01;
        std::cout << count << std::endl;
        if(CheckPress)
        {
            
            break;
        }
        if(count >= X)
            _tWhile = false;
    }
    if(_tWhile)
    {
        double win = 0.0;
        win = win + stavka * count;
        balance = balance + stavka * count;
       // std::cout << "Ты выйграл - " << win<< std::endl;
        _tWhile = false;
        CheckPress = false;
        main();
    }
    else if(!_tWhile)
    {
        std::cout << "Ты выйграл - НИХУЯ" << std::endl;
        _tWhile = false;
        CheckPress = false;
        main();
    }
}

