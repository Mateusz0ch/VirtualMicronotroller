#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

enum PORT
{
    PORTA,
    PORTB
};
enum BIT
{
    Bit1 = 1,
    Bit2 = 2,
    Bit3 = 4,
    Bit4 = 8,
    Bit5 = 16,
    Bit6 = 32,
    Bit7 = 64,
    Bit8 = 128
};
class Microcontroller
{
    struct
    {
        unsigned int PORTA = 0b00110011;
        unsigned int PORTB = 0b101010101;
        unsigned int PINA = 0b00000001;
        unsigned int PINB = 0b00000000;
    } Conf;

public:
    bool getState(PORT, BIT);
    bool isOutput(PORT, BIT);
};
#endif