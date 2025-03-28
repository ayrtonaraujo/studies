#include <iostream>
#include <stdlib.h> 
#include <string>
#include <chrono>
#include <thread>

#define QTY 5
#define DOTS 10
#define TIME_MILI 150

int main () {
    int control = 0;

    for (int i = 0; i < QTY; i++) {
        std::cout << i + 1;

        for (int j = 0; j < DOTS; j++) {
            
            std::cout << ".";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(TIME_MILI));
        }

        std::cout.flush();
        //std::cout << std::endl;
        system("clear");
    }

    return 0;
}