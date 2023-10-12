#include <iostream>
#include <string>

#include "src/template.cpp"

int main()
{
    Microcontroller m;
    if (m.isOutput(PORT::PORTA, BIT::Bit1))
        std::cout << "OUTPUT" << std::endl;
    else
        std::cout << "INPUT";
}