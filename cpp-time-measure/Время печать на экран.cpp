#include <stdio.h>
#include <chrono>
#include <iostream>

void printSignsTimeMeasure()
{
    for (int i = 0; i < 1000; i++)
    {
        auto begin = std::chrono::high_resolution_clock::now();
        std::cout << "Hello world!\n";
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed_ms = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
        std::cout << "The time: " << elapsed_ms.count() << " micro sec\n";
    }
}

int main() 
{
    printSignsTimeMeasure();
    return 0;
}
