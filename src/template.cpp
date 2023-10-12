#include "../include/template.hpp"

bool Microcontroller::getState(const PORT x, const BIT b)
{
    switch (x)
    {
    case PORT::PORTA:
        return (b & Conf.PORTA);
    case PORT::PORTB:
        return (b & Conf.PORTB);
    }
    return false;
}
bool Microcontroller::isOutput(PORT x, BIT b)
{
    switch (x)
    {
    case PORT::PORTA:
        return (b & Conf.PINA) ? 1 : 0;
    case PORT::PORTB:
        return (b & Conf.PINB) ? 1 : 0;
    }
    return false;
}