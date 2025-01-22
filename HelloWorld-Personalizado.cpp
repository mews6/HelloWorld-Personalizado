// HelloWorld-Personalizado.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <ctime>    

using namespace std;
using namespace std::chrono;

int main()
{
    auto end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Hola Mundo. Saludo de Jaime Torres, hoy " << std::ctime(&end_time);
}