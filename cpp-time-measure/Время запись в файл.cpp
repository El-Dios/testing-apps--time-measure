#include <iostream>
#include <fstream>
#include <chrono>
#include <string>

void writeToFileTimeMeasure()
{
    std::string line = "Hello World!\n";
    auto begin = std::chrono::high_resolution_clock::now();
    std::ofstream out;
    out.open("hello.txt");
    if (out.is_open())
    {
        out << line;   
    }
    out.close();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    std::cout << "The time: " << elapsed_ms.count() << " micro sec\n";
}

int main()
{
    writeToFileTimeMeasure();
    return 0;
}
