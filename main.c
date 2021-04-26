/**
 * @file main.c
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief main file
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "port.h"


int main(void)
{

    port();

    while(1)
    {
       if((!((PIND)&(1<<PD0)))&& (!((PINC)&(1<<PC0)))) // SEAT SWITCH PRESSED AND HEATER SWITCH PRESSED
       {
           PORTB |= (1<<PB0);
            _delay_ms(200);
       }
       else
       {
           PORTB &=~ (1<<PB0);
            _delay_ms(20);
       }

    }

    return 0;
}
